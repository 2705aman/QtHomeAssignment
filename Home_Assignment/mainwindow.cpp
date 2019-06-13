#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include"dialog_chatbox.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_login_clicked()
{
       QString username=ui->lineEdit_username->text();//storing username in QString username

       QString password=ui->lineEdit_2_password->text();//storing password in Qstring password

       if(username!="" && password!="")
       {
           // username and password editors are non empty
           //connect to XMPP server/
           //if username and password are correct open a new dialogbox
           //else dispaly QMessageBox with error message
           //if username and password are correct switch to new dialog box
           Dialog_chatbox dialogbox_chat;
           dialogbox_chat.setModal(true);
           dialogbox_chat.exec();


       }
       else {
           // if username and password editors are empty
           QMessageBox::warning(this,"Login","Enter a valid username and password");
       }
}
