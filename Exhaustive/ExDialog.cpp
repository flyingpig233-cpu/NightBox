#include "ExDialog.h"
#include "ui_ExDialog.h"

ExDialog::ExDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ExDialog)
{
    ui->setupUi(this);
}

ExDialog::~ExDialog()
{
    delete ui;
}
