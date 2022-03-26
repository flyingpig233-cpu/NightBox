#include "nlabelbutton.h"
#include <QFrame>
#include <QMouseEvent>

NLabelButton::NLabelButton(QWidget *parent)
    : QLabel(parent)
{

}

void NLabelButton::mouseReleaseEvent(QMouseEvent *event)
{
    if (frameRect().contains(event->pos()))
    {
        emit onClick();
    }
}
void NLabelButton()
{
}
