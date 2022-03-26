#ifndef NABOUTBOX_H
#define NABOUTBOX_H

#include <QDialog>

namespace Ui {
class NAboutBox;
}

class NAboutBox : public QDialog
{
    Q_OBJECT

public:
    explicit NAboutBox(QWidget *parent = nullptr);
    ~NAboutBox();

private:
    Ui::NAboutBox *ui;
};

#endif // NABOUTBOX_H
