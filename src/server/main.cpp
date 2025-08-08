#include <QtWidgets>
#include <iostream>
#include <qstring.h>
#include <qtextedit.h>
#include <qwidget.h>

int main(int argc, char *argv[]) {
  std::cout << "Why didn't I just use python for this" << std::endl;

  QApplication app(argc, argv);
  QWidget window;
  window.resize(500, 500);
  window.show();
  window.setWindowTitle("This is a window");
  QTextEdit testEdit;
  QString myText("test");
  testEdit.setText(myText);

  // Bro what the FUCK is a CMake

  return app.exec();
}
