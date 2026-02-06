#include "mainwindow.h"
#include <QtSql/QSqlDatabase>
#include <QApplication>
#include <QTextStream>
#include <QCoreApplication>
#include <QMessageBox>
#include "inquiry.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();

}
