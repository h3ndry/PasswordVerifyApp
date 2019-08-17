#include "passwordverifyapp.h"
#include "ui_passwordverifyapp.h"

PasswordVerifyApp::PasswordVerifyApp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PasswordVerifyApp)
{
    ui->setupUi(this);
}

PasswordVerifyApp::~PasswordVerifyApp()
{
    delete ui;
}
