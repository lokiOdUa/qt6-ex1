#include <QCoreApplication>

#include <iostream>
#include <string>

#include <QTextStream>
#include <QDebug>

void do_cpp()
{
    std::string name;

    std::cout << "Hello world!" << std::endl;
    std::cout << "Please enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Hello " << name << "!" << std::endl;
}

void do_qt()
{
    QString name;
    QTextStream qin(stdin);
    QTextStream qout(stdout);

    qout << "Hello world!" << Qt::endl;
    qout << "Please enter your name: ";
    qout.flush();
    name = qin.readLine();
    qout << "Hello " << name << "!" << Qt::endl;
    qout.flush();
}

void do_debug()
{
    QString name;
    QTextStream qin(stdin);

    qInfo() << "Hello world!";
    qInfo() << "Please enter your name: ";
    name = qin.readLine();
    qInfo() << "Hello" << name << "!";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    do_cpp();
//    do_qt();
    do_debug();

    return a.exec();
}
