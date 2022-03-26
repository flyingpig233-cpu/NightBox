#ifndef MATHDIALOG_H
#define MATHDIALOG_H

#include <QDialog>

namespace Ui {
class MathDialog;
}

class MathDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MathDialog(QWidget *parent = nullptr);
    ~MathDialog();

private:
    Ui::MathDialog *ui;
};

#endif // MATHDIALOG_H
