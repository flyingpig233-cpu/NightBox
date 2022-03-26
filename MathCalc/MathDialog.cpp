#include "MathDialog.h"
#include "ui_MathDialog.h"

MathDialog::MathDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MathDialog)
{
    ui->setupUi(this);
}

MathDialog::~MathDialog()
{
    delete ui;
}
