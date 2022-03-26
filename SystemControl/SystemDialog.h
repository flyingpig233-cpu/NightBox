#ifndef SYSTEMDIALOG_H
#define SYSTEMDIALOG_H

#include <QDialog>

namespace Ui {
class SystemDialog;
}

class SystemDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SystemDialog(QWidget *parent = nullptr);
    ~SystemDialog();

private:
    Ui::SystemDialog *ui;
};

#endif // SYSTEMDIALOG_H
