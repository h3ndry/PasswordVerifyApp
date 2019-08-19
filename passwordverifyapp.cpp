#include "passwordverifyapp.h"
#include "ui_passwordverifyapp.h"
#include "verify.h"

PasswordVerifyApp::PasswordVerifyApp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PasswordVerifyApp){
    ui->setupUi(this);

    ui->matchLabel->hide();
    ui->continueBtn->hide();

    Verify verifyPasswor;

}

PasswordVerifyApp::~PasswordVerifyApp()
{
    delete ui;
}

void PasswordVerifyApp::on_PasswordLineEdit_textChanged(const QString &arg1){
    if (arg1.length() >= 8) {
        if (!ui->condition1->isChecked()){
            ui->condition1->click();
            ui->condition1->setStyleSheet("color: green");
        }
    }
}
