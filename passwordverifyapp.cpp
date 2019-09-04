#include "passwordverifyapp.h"
#include "ui_passwordverifyapp.h"
#include <QDebug>
//#include "verify.h"

PasswordVerifyApp::PasswordVerifyApp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PasswordVerifyApp){
    ui->setupUi(this);

    ui->matchLabel->hide();
    ui->continueBtn->hide();  

}

PasswordVerifyApp::~PasswordVerifyApp() {
    delete ui;
}

void PasswordVerifyApp::on_PasswordLineEdit_textChanged(const QString &arg1){
    isLong(arg1) ? mark(ui->condition1) : unMark(ui->condition1);
    checkNumber(arg1) ? mark(ui->condition2) : unMark(ui->condition2);
    upperCheck(arg1) ? mark(ui->condition3) : unMark(ui->condition3);
    lowerCheck(arg1) ? mark(ui->condition4) : unMark(ui->condition4);
    specialCheck(arg1) ? mark(ui->condition5) : unMark(ui->condition5);
}
void PasswordVerifyApp::on_confirmPasswordLineEdit_textChanged(const QString &arg1){
    //qDebug() << arg1;
    if (ui->PasswordLineEdit->text() == arg1) {
        ui->continueBtn->show();
        ui->matchLabel->hide();
    } else {
        ui->continueBtn->hide();
        ui->matchLabel->show();
    }

    if (arg1 == "") { ui->continueBtn->hide(); ui->matchLabel->hide();}

}

void PasswordVerifyApp::mark(QCheckBox *condition){
    if (!condition->isChecked()) {
        condition->click();
        condition->setStyleSheet("color : green");
        }
}

void PasswordVerifyApp::unMark(QCheckBox *condition){
    if (condition->isChecked()) {
       condition->click();
       condition->setStyleSheet("color : white");
    }
}

bool PasswordVerifyApp::checkNumber(const QString str){
    for (int i = 0; i < 10; i++) if (str.contains(QString::number(i))) return true;
    return false;
}

bool PasswordVerifyApp::lowerCheck(const QString str){
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
       if (str[i].isLower()) count++;
       if (count >= 3) return true;
    }
    return false;
}

bool PasswordVerifyApp::upperCheck(const QString str){
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
       if (str[i].isUpper()) count++;
       if (count >= 3) return true;
    }
    return false;
}

bool PasswordVerifyApp::specialCheck(const QString str){
    for (int i = 0; i < str.length(); i++) {
       if (str.contains("!")) return true;
       if (str.contains("@")) return true;
       if (str.contains("&")) return true;
       if (str.contains("#")) return true;
       if (str.contains("*")) return true;
       if (str.contains("+")) return true;
       if (str.contains("-")) return true;
       if (str.contains("~")) return true;
       if (str.contains("%")) return true;
       if (str.contains("$")) return true;
       if (str.contains("\'")) return true;
       if (str.contains(";")) return true;
       if (str.contains("?")) return true;
       if (str.contains("<")) return true;
       if (str.contains(">")) return true;
       if (str.contains(",")) return true;
    }

return false;
}


