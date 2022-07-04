#include <iostream>
using namespace std;
int main()
{
    cout<<"DATATYPE THAT HOLD ADDRESS OF OTHER DATA TYPE"<<endl;
    int a=100;
    int *b=&a;
    cout<<" a="<<a<<endl;
    cout<<"*b="<<*b<<endl;
    cout<<"&a="<<&a<<endl;
    cout<<" b="<<b<<endl;
    cout<<"&b="<<&b<<endl;
   return 0;
}
