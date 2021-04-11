/********************************************************************************
** Form generated from reading UI file 'config.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIG_H
#define UI_CONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_config
{
public:
    QWidget *centralwidget;
    QLineEdit *js_path;
    QLabel *label;
    QPushButton *js_path_found;
    QCheckBox *deleteload_key;
    QPushButton *config_save;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *config)
    {
        if (config->objectName().isEmpty())
            config->setObjectName(QString::fromUtf8("config"));
        config->resize(399, 176);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/icon/favicon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        config->setWindowIcon(icon);
        centralwidget = new QWidget(config);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        js_path = new QLineEdit(centralwidget);
        js_path->setObjectName(QString::fromUtf8("js_path"));
        js_path->setGeometry(QRect(60, 10, 261, 20));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 40, 20));
        js_path_found = new QPushButton(centralwidget);
        js_path_found->setObjectName(QString::fromUtf8("js_path_found"));
        js_path_found->setGeometry(QRect(325, 10, 50, 20));
        js_path_found->setCursor(QCursor(Qt::PointingHandCursor));
        deleteload_key = new QCheckBox(centralwidget);
        deleteload_key->setObjectName(QString::fromUtf8("deleteload_key"));
        deleteload_key->setGeometry(QRect(60, 50, 261, 20));
        deleteload_key->setCursor(QCursor(Qt::ArrowCursor));
        config_save = new QPushButton(centralwidget);
        config_save->setObjectName(QString::fromUtf8("config_save"));
        config_save->setGeometry(QRect(60, 100, 75, 23));
        config_save->setCursor(QCursor(Qt::PointingHandCursor));
        config->setCentralWidget(centralwidget);
        menubar = new QMenuBar(config);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 399, 23));
        config->setMenuBar(menubar);
        statusbar = new QStatusBar(config);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        config->setStatusBar(statusbar);

        retranslateUi(config);

        QMetaObject::connectSlotsByName(config);
    } // setupUi

    void retranslateUi(QMainWindow *config)
    {
        config->setWindowTitle(QApplication::translate("config", "\351\205\215\347\275\256", nullptr));
        label->setText(QApplication::translate("config", "js\346\226\207\344\273\266:", nullptr));
        js_path_found->setText(QApplication::translate("config", "\346\265\217\350\247\210", nullptr));
        deleteload_key->setText(QApplication::translate("config", "\351\207\215\345\220\257\346\210\226\345\205\263\351\227\255node.js\346\234\215\345\212\241\345\231\250\346\227\266\345\210\240\351\231\244\344\271\213\345\211\215\347\232\204\350\256\260\345\275\225", nullptr));
        config_save->setText(QApplication::translate("config", "\344\277\235\345\255\230\351\205\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class config: public Ui_config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_H
