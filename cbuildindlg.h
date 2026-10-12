#ifndef CBUILDINDLG_H
#define CBUILDINDLG_H

#include <QDialog>
#include <QtWidgets>
class CBuildInDlg : public QDialog
{
    Q_OBJECT

public:
    explicit CBuildInDlg(QWidget *parent = nullptr);
    ~CBuildInDlg() override;

private:
    QTextEdit*   displayTextEdit;
    QPushButton* colorPushBtn;
    QPushButton* errorPushBtn;
    QPushButton* filePushBtn;
    QPushButton* fontPushBtn;
    QPushButton* inputPushBtn;
    QPushButton* pagePushBtn;
    QPushButton* progressPushBtn;
    QPushButton* printPushBtn;
    QPushButton* textcolorPushBtn;
private slots:
    void doPushBtn();
};
#endif // CBUILDINDLG_H
