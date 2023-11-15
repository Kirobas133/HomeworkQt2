#include <QCoreApplication>
#include <QUdpSocket>
#include <QSqlDatabase>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QUdpSocket socket;
    QSqlDatabase personalDatabase;

    return a.exec();
}
