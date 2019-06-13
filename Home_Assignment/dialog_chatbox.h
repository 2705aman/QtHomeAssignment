#ifndef DIALOG_CHATBOX_H
#define DIALOG_CHATBOX_H

#include <QDialog>

namespace Ui {
class Dialog_chatbox;
}

class Dialog_chatbox : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_chatbox(QWidget *parent = nullptr);
    ~Dialog_chatbox();

private:
    Ui::Dialog_chatbox *ui;
};

#endif // DIALOG_CHATBOX_H
