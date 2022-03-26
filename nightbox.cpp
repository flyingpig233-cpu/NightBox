#include "nightbox.h"
#include "ui_nightbox.h"

#include <QDebug>
#include <QLabel>

#include "naboutbox.h"

NightBox::NightBox(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::NightBox)
{
    ui->setupUi(this);
    connect(ui->aboutLabel, &NLabelButton::onClick, this, &NightBox::aboutNightBox);
    connect(ui->systemPushButton, &QPushButton::clicked, this, &NightBox::openSystemDialog);
    connect(ui->mathPushButton, &QPushButton::clicked, this, &NightBox::openMathDialog);
    connect(ui->exPushButton, &QPushButton::clicked, this, &NightBox::openExDialog);
}

void NightBox::openSystemDialog()
{
    this->systemDialog = std::unique_ptr<SystemDialog>(new SystemDialog(this));
    systemDialog->show();
}

void NightBox::openMathDialog()
{
    this->mathDialog = std::unique_ptr<MathDialog>(new MathDialog(this));
    mathDialog->show();
}

void NightBox::openExDialog()
{
    this->exDialog = std::unique_ptr<ExDialog>(new ExDialog(this));
    exDialog->show();
}
void NightBox::aboutNightBox()
{
    NAboutBox aboutBox(this);
    aboutBox.exec();
}
NightBox::~NightBox()
{
    delete ui;
}

