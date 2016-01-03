#include "mainwindow.h"
#include <QApplication>
#include <QtWidgets>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLabel lbl("<span style=""font-size:20pt"">Hello</span>");
    lbl.show();
    return app.exec();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
