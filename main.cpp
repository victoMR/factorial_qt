
#include <QCoreApplication>
#include <iostream>
#include <factorial.h>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Factorial f;
    int n=0;


    while (true){
        cout <<"Ingreasa num = ";
        cin>>n;
        if (n==-1) break;
        cout <<"El fact de  "<<n<<" es  ="<< f.facItera(n) << endl;
    }
    return a.exec();
}
