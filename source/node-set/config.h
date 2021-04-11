#ifndef CONFIG_H
#define CONFIG_H

#include <QMainWindow>

namespace Ui {
class config;
}

class config : public QMainWindow
{
    Q_OBJECT

public:
    explicit config(QWidget *parent = nullptr);
    ~config();

public slots:
    void reloadConfig();

signals:
    void reload();

private:
    Ui::config *ui;
};

#endif // CONFIG_H
