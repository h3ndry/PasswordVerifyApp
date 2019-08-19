#ifndef PASSWORDVERIFYAPP_H
#define PASSWORDVERIFYAPP_H

#include <QMainWindow>

namespace Ui {
class PasswordVerifyApp;
}

class PasswordVerifyApp : public QMainWindow
{
    Q_OBJECT

public:
    explicit PasswordVerifyApp(QWidget *parent = nullptr);
    ~PasswordVerifyApp();

private slots:
    void on_PasswordLineEdit_textChanged(const QString &arg1);

private:
    Ui::PasswordVerifyApp *ui;
};

#endif // PASSWORDVERIFYAPP_H
