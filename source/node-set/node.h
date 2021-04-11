#ifndef NODE_H
#define NODE_H

#include <QMainWindow>
#include <QProcess>
#include <QPalette>
#include "config.h"

namespace Ui {
class node;
}

class node : public QMainWindow
{
    Q_OBJECT

public:
    explicit node(QWidget *parent = nullptr);
    void connected();
    void unconnected();
    void readConfig();
    void makeConfig();
    ~node();

private:
    QString jspath;
    int del_key;
    Ui::node *ui;
    QProcess * node_pro;
    config conf;

    int server_set;
    int server_error;
};

#endif // NODE_H
