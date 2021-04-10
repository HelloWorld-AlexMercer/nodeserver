/********************************************************************************
** Form generated from reading UI file 'node.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NODE_H
#define UI_NODE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_node
{
public:
    QAction *setting;
    QWidget *centralWidget;
    QPushButton *start;
    QPushButton *reload;
    QPushButton *close;
    QPushButton *reset;
    QTextEdit *pro_text;
    QLabel *server;
    QPushButton *config_reload;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *node)
    {
        if (node->objectName().isEmpty())
            node->setObjectName(QString::fromUtf8("node"));
        node->resize(611, 327);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/icon/favicon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        node->setWindowIcon(icon);
        setting = new QAction(node);
        setting->setObjectName(QString::fromUtf8("setting"));
        centralWidget = new QWidget(node);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        start = new QPushButton(centralWidget);
        start->setObjectName(QString::fromUtf8("start"));
        start->setGeometry(QRect(10, 10, 101, 23));
        start->setCursor(QCursor(Qt::PointingHandCursor));
        reload = new QPushButton(centralWidget);
        reload->setObjectName(QString::fromUtf8("reload"));
        reload->setGeometry(QRect(10, 40, 101, 23));
        reload->setCursor(QCursor(Qt::PointingHandCursor));
        close = new QPushButton(centralWidget);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(10, 70, 101, 23));
        close->setCursor(QCursor(Qt::PointingHandCursor));
        reset = new QPushButton(centralWidget);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setGeometry(QRect(10, 100, 101, 23));
        reset->setCursor(QCursor(Qt::PointingHandCursor));
        pro_text = new QTextEdit(centralWidget);
        pro_text->setObjectName(QString::fromUtf8("pro_text"));
        pro_text->setGeometry(QRect(120, 10, 481, 251));
        pro_text->setFocusPolicy(Qt::NoFocus);
        server = new QLabel(centralWidget);
        server->setObjectName(QString::fromUtf8("server"));
        server->setGeometry(QRect(10, 240, 51, 21));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush1(QColor(0, 0, 0, 128));
        brush1.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        server->setPalette(palette);
        server->setStyleSheet(QString::fromUtf8("color: red"));
        config_reload = new QPushButton(centralWidget);
        config_reload->setObjectName(QString::fromUtf8("config_reload"));
        config_reload->setGeometry(QRect(10, 130, 101, 23));
        config_reload->setCursor(QCursor(Qt::PointingHandCursor));
        node->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(node);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 611, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        node->setMenuBar(menuBar);
        mainToolBar = new QToolBar(node);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        node->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(node);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        node->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(setting);

        retranslateUi(node);

        QMetaObject::connectSlotsByName(node);
    } // setupUi

    void retranslateUi(QMainWindow *node)
    {
        node->setWindowTitle(QApplication::translate("node", "nodeserver", nullptr));
        setting->setText(QApplication::translate("node", "\351\205\215\347\275\256", nullptr));
        start->setText(QApplication::translate("node", "\345\220\257\345\212\250\346\234\215\345\212\241\345\231\250", nullptr));
        reload->setText(QApplication::translate("node", "\351\207\215\345\220\257\346\234\215\345\212\241\345\231\250", nullptr));
        close->setText(QApplication::translate("node", "\345\205\263\351\227\255\346\234\215\345\212\241\345\231\250", nullptr));
        reset->setText(QApplication::translate("node", "\346\233\264\346\226\260\347\212\266\346\200\201", nullptr));
        server->setText(QApplication::translate("node", "\346\234\252\350\277\236\346\216\245", nullptr));
        config_reload->setText(QApplication::translate("node", "\351\207\215\346\226\260\345\212\240\350\275\275\351\205\215\347\275\256", nullptr));
        menu->setTitle(QApplication::translate("node", "\345\267\245\345\205\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class node: public Ui_node {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NODE_H
