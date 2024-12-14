#include <QCoreApplication>
#include "myclass.h"

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    // Luodaan MyClass-olio
    MyClass myObject;

    // Kutsutaan metodia raiseMySignal(), joka lähettää signaalin
    myObject.raiseMySignal();

    return app.exec();
}
