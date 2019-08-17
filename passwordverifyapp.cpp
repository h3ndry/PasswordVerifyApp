#include "passwordverifyapp.h"
#include "ui_passwordverifyapp.h"

PasswordVerifyApp::PasswordVerifyApp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PasswordVerifyApp){
    ui->setupUi(this);
    //ui->contBtn->hide();
    //ui->dontMacth->hide();
}

PasswordVerifyApp::~PasswordVerifyApp()
{
    delete ui;
}
