#ifndef EXDIALOG_H
#define EXDIALOG_H

#include <QDialog>

namespace Ui {
class ExDialog;
}

class ExDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ExDialog(QWidget *parent = nullptr);
    ~ExDialog();

private:
    Ui::ExDialog *ui;
};

#endif // EXDIALOG_H
