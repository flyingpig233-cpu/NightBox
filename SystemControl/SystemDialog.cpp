#include "SystemDialog.h"
#include "ui_SystemDialog.h"

SystemDialog::SystemDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SystemDialog)
{
    ui->setupUi(this);
}

SystemDialog::~SystemDialog()
{
    delete ui;
}
