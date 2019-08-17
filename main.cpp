#include "passwordverifyapp.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PasswordVerifyApp w;
    w.show();

    return a.exec();
}
