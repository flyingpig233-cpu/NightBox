#ifndef NIGHTBOX_H
#define NIGHTBOX_H

#include <QDialog>
#include <memory>
#include "nlabelbutton.h"
#include "SystemControl/SystemDialog.h"
#include "MathCalc/MathDialog.h"
#include "Exhaustive/ExDialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class NightBox; }
QT_END_NAMESPACE

class NightBox : public QDialog
{
    Q_OBJECT

public:
    NightBox(QWidget *parent = nullptr);
    ~NightBox();

private slots:
    void aboutNightBox();
    void openSystemDialog();
    void openMathDialog();
    void openExDialog();
private:
    Ui::NightBox *ui;
    std::unique_ptr<SystemDialog> systemDialog;
    std::unique_ptr<MathDialog> mathDialog;
    std::unique_ptr<ExDialog> exDialog;
};
#endif // NIGHTBOX_H
