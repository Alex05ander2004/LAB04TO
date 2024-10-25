#include <QCoreApplication>
#include <QDebug>
#include <QObject>
#include <QString>
#include "comunicacion.h"
#include "main.moc"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);
    QObject *person=new QObject;
    Comunicacion *pepe=new Comunicacion(person);
    Comunicacion *jose=new Comunicacion(person);
    //set
    QObject::connect(pepe,SIGNAL(enviarmensaje(QString)),jose,SLOT(escuchar(QString)));
    QObject::connect(jose,SIGNAL(enviarmensaje(QString)),pepe,SLOT(escuchar(QString)));

    pepe->conversar("buenos dias");
    jose->conversar("como vas?");

    delete person;

    return 0;  // Salida del programa
}
