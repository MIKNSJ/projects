// ===== Established 2024-05-22 - 2024-0X-0X ========
//
//  Functionality: Builds the GUI.
//
// ==================================================



#include "mainwindow.h"
#include <QApplication>



/**
 * Enables for user input of a vector
 * @param argc The number of arguments.
 * @param argv The commands that follows.
 * @return 0 for no errors: application window, otherwise 1.
*/
int main(int argc, char** argv) {
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
