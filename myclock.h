#pragma once

#include <QWidget>
#include <QLabel>

class Timer : public QWidget {

  public:
    Timer(QWidget *parent = 0);

  protected:
    void timerEvent(QTimerEvent *event);

  private:
    QLabel *labelTime;
    QLabel *labelDate;
    QLabel *labelDayOfWeek;
};
