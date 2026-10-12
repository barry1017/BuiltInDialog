#include "cbuildindlg.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CBuildInDlg w;
    w.setWindowTitle("我的對話盒");
    w.show();
    return QApplication::exec();
}
