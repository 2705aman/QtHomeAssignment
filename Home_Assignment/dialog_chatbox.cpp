#include "dialog_chatbox.h"
#include "ui_dialog_chatbox.h"

Dialog_chatbox::Dialog_chatbox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_chatbox)
{
    ui->setupUi(this);
}

Dialog_chatbox::~Dialog_chatbox()
{
    delete ui;
}
