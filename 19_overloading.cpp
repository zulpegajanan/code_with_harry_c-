#include <iostream>
using namespace std;

void sum(int a,int b,int c){
    cout<<"Addition of three numbers are "<<a+b+c<<endl;
}

void sum(int a,int b){
    cout<<"Addition of two numbers are "<<a+b<<endl;
}

int main()
{
    sum(1,3,5);
    sum(3,4);
    
    return 0;
}
