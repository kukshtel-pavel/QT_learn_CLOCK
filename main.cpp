#include "myclock.h"
#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);

  Timer window;

  window.resize(250, 150);
  window.setWindowTitle("MyClock");
  window.setWindowIcon(QIcon(":/source/source/clock_icon.png"));
  window.setStyleSheet("background-color: silver");
  window.show();

  return app.exec();
}
