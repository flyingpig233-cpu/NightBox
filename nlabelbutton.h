#ifndef NLABELBUTTON_H
#define NLABELBUTTON_H

#include <QLabel>

class NLabelButton : public QLabel
{
    Q_OBJECT
public:
    NLabelButton(QWidget *parent = 0);
protected:
    virtual void mouseReleaseEvent(QMouseEvent *event);
signals:
    void onClick();

};

#endif // NLABELBUTTON_H
