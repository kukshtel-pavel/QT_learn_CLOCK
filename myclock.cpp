#include "myclock.h"

#include <QGridLayout>
#include <QTime>
#include <QDate>
#include <QIcon>



Timer::Timer(QWidget *parent)
    : QWidget(parent) {
// use GRID layout
  QGridLayout *grid = new QGridLayout(this);

// create time screen
  labelTime = new QLabel("", this);
  grid->addWidget(labelTime, 0, 0);
  QTime qtime = QTime::currentTime();
  QString stime = qtime.toString();
  labelTime->setText(stime);
  labelTime->setToolTip("current Time");
  labelTime->setStyleSheet(QString("font-size: %1px").arg(50));
  labelTime->setAlignment(Qt::AlignTop | Qt::AlignCenter);


// create date screen
  labelDate = new QLabel("", this);
  grid->addWidget(labelDate, 1, 0);
  QDate qdate = QDate::currentDate();
  QString sdate = qdate.toString("dddd  d MMMM yyyy");
  labelDate->setToolTip("current Date");
  labelDate->setText(sdate);
  labelDate->setStyleSheet(QString("font-size: %1px").arg(24));
  labelDate->setAlignment(Qt::AlignTop | Qt::AlignCenter);


  startTimer(1000);
}

void Timer::timerEvent(QTimerEvent *event) {

  Q_UNUSED(event);

  QTime qtime = QTime::currentTime();
  QString stime = qtime.toString();

  QDate qdate = QDate::currentDate();
  QString sdate = qdate.toString("dddd d MMMM yyyy");

  labelTime->setText(stime);
  labelDate->setText(sdate);
}

