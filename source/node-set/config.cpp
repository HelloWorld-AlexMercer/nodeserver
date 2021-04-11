#include "config.h"
#include "ui_config.h"
#include <QFileDialog>
#include <QPushButton>
#include <QMessageBox>
#include <QSettings>

void debug_(QString ptr){
    QMessageBox iol;
    iol.about(nullptr, "message", ptr);
}

void config::reloadConfig(){
    emit reload();
}

config::config(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::config)
{
    ui->setupUi(this);

    this->setWindowFlags(this->windowFlags() &~ Qt::WindowMaximizeButtonHint);
    setFixedSize(this->width(), this->height());


    QSettings * ini = new QSettings("server.ini", QSettings::IniFormat);
    int del_key = ini->value("del_load").toInt();
    ui->js_path->setText(ini->value("Path").toString());
    if(del_key == 0){
        ui->deleteload_key->setCheckState(Qt::Checked);
    }
    else if(del_key == 1){
        ui->deleteload_key->setCheckState(Qt::Unchecked);
    }


    connect(ui->js_path_found, &QPushButton::clicked, this, [=](){
        QString path = QFileDialog::getOpenFileName(this,"选择文件","/", "Files(*.js)");
        ui->js_path->setText(path);
    });

    connect(ui->config_save, &QPushButton::clicked, this, [=](){
        QString node_path = ui->js_path->text();
        if(node_path[node_path.length()-1] == 's' && node_path[node_path.length()-2] == 'j' && node_path[node_path.length()-3] == '.'){
            QSettings * conf = new QSettings("server.ini", QSettings::IniFormat);
            conf->setValue("Path", node_path);
            if(ui->deleteload_key->isChecked() == false){
                conf->setValue("del_load", 1);
            }
            else if(ui->deleteload_key->isChecked() == true){
                conf->setValue("del_load", 0);
            }
            reloadConfig();
            close();
        }
        else{
            debug_("文件错误！");
        }
    });
}

config::~config()
{
    delete ui;
}
