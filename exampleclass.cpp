#include "exampleclass.h"

ExampleClass::ExampleClass()
{
    qDebug()<<"Start";
    QObject:connect(object1, SIGNAL(readyToSay()), object2, SLOT(SayHelloSlot()) );
        qDebug()<<"End";

}

void ExampleClass::startToWait()
{
    QThread::msleep(1000);
    emit readyToSay();

}

void ExampleClass::sayHelloSlot()
{
    qDebug()<<"Terve";

}
