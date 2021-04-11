#include "node.h"
#include "ui_node.h"
#include <QPushButton>
#include <QProcess>
#include <QDebug>
#include <QString>
#include <QStringList>
#include <QMessageBox>
#include <QSettings>
#include <QFile>

void debug(QString ptr){
    QMessageBox iol;
    iol.about(nullptr, "message", ptr);
}

/*
    \u001B[0m 白色
    \u001B[36m 蓝色
    \u001B[32m 绿色
    \u001B[33m 黄色
*/

QString process_text(QString ptr){
    QStringList ptrlist1 = ptr.split("\u001B[0m");
    QString ptr1 = ptrlist1.join("");
    QStringList ptrlist2 = ptr1.split("\u001B[36m");
    QString ptr2 = ptrlist2.join("");
    QStringList ptrlist3 = ptr2.split("\u001B[32m");
    QString ptr3 = ptrlist3.join("");
    QStringList ptrlist4 = ptr3.split("\u001B[33m");
    QString ptr4 = ptrlist4.join("");
    return  ptr4;
}

void node::connected(){
    ui->server->setText("已连接");
    ui->server->setStyleSheet("color: green;");

}
void node::unconnected(){
    ui->server->setText("未连接");
    ui->server->setStyleSheet("color: red;");
}

void node::readConfig(){
    QSettings * ini = new QSettings("server.ini", QSettings::IniFormat);
    jspath = ini->value("Path").toString();
    del_key = ini->value("del_load").toInt();
    if(!QFile::exists(jspath)){
        server_error = -1;
    }
    else{
        server_error = 0;
    }
}

void node::makeConfig(){
    QFile con("server.ini");
    if(!con.exists()){
        con.open(QIODevice::WriteOnly);
        con.close();
    }
}

node::node(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::node)
{
    ui->setupUi(this);

    this->setWindowFlags(this->windowFlags() &~ Qt::WindowMaximizeButtonHint);
    setFixedSize(this->width(), this->height());

    node_pro = new QProcess(this);
    jspath = "";
    del_key = 0;//0为删除
    server_set = -1;
    server_error = 0;

    unconnected();

    makeConfig();
    readConfig();

    connect(ui->start, &QPushButton::clicked, this, [=](){
        if(server_set == -1){
            if(server_error == 0){
                QStringList exe;
                exe << jspath;
                node_pro->start("node", exe);
                node_pro->waitForStarted();
                connected();
                server_set = 0;
            }
            else{
                debug("连接失败！");
            }
        }
    });

    connect(node_pro, static_cast<void(QProcess::*)(int, QProcess::ExitStatus)>(&QProcess::finished), this, [=] (int exitCode, QProcess::ExitStatus exitStatus){
        if(exitCode == 1 && exitStatus == QProcess::NormalExit){
            debug("文件错误!");
            unconnected();
            server_set = -1;
        }
    });

    connect(ui->close, &QPushButton::clicked, this, [=](){
        if(server_set == 0){
            node_pro->close();
            if(del_key == 0){
                ui->pro_text->setPlainText("");
            }
            unconnected();
            server_set = -1;
        }
        else{
            debug("未启动服务器！");
        }
    });

    connect(ui->reload, &QPushButton::clicked, this, [=](){
        if(server_set == 0){
            if(server_error == 0){
                node_pro->close();
                if(del_key == 0){
                    ui->pro_text->setPlainText("");
                }
                unconnected();
                server_set = -1;

                QStringList exe;
                exe << "H:\\HTTPD_HTML_REACT_MANAGER\\app.js";
                node_pro->start("node", exe);
                node_pro->waitForStarted();
                connected();
                server_set = 0;
            }
            else{
                debug("连接失败！");
            }
        }
        else{
            debug("未启动服务器！");
        }

    });


    connect(ui->reset, &QPushButton::clicked, this, [=](){
        if(server_set == 0){
            ui->pro_text->append(process_text(QString::fromLocal8Bit(node_pro->readAllStandardOutput())));
        }
        else{
            debug("未启动服务器！");
        }
    });

    connect(ui->setting, &QAction::triggered, this, [=](){
        conf.show();
    });

    connect(&conf, &config::reload, this, [=](){
        readConfig();
    });

    connect(ui->config_reload, &QPushButton::clicked, this, [=](){
        readConfig();
    });
}

node::~node()
{
    delete ui;
}
