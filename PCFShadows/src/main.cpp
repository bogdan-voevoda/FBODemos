#include <QApplication>
#include "MainWindow.h"
/* this code runs the basic main window and is created by the Qt Creator app */
int main(int argc, char *argv[])
{
  // make an instance of the QApplication  
  QApplication a(argc, argv);

  QGLFormat glf = QGLFormat::defaultFormat();
  glf.setSampleBuffers(true);
  glf.setSamples(4);
  QGLFormat::setDefaultFormat(glf);
  // Create a new MainWindow

  MainWindow w;
  // show it
  w.show();
  // hand control over to Qt framework
  return a.exec();
}
