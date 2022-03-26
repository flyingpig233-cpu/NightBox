#include "naboutbox.h"
#include "ui_naboutbox.h"
#include <QPushButton>

NAboutBox::NAboutBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NAboutBox)
{
    ui->setupUi(this);
    connect(ui->okButton, &QPushButton::clicked, this, &NAboutBox::close);
}

NAboutBox::~NAboutBox()
{
    delete ui;
}
