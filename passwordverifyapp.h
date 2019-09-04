#ifndef PASSWORDVERIFYAPP_H
#define PASSWORDVERIFYAPP_H

#include <QMainWindow>
#include <QString>
#include <QCheckBox>

namespace Ui {
class PasswordVerifyApp;
}

class PasswordVerifyApp : public QMainWindow{
    Q_OBJECT

public:
    explicit PasswordVerifyApp(QWidget *parent = nullptr);
    ~PasswordVerifyApp();

private slots:
    void on_PasswordLineEdit_textChanged(const QString &arg1);
    bool isLong(const QString &password) { return (password.length() >= 8 ? true : false); }
    void mark(QCheckBox *condition);
    void unMark(QCheckBox *condition);
    bool checkNumber(const  QString str);
    bool lowerCheck(const  QString str);
    bool upperCheck(const  QString str);
    bool specialCheck(const  QString str);

    void on_confirmPasswordLineEdit_textChanged(const QString &arg1);

private:
    Ui::PasswordVerifyApp *ui;
};

#endif // PASSWORDVERIFYAPP_H
