#include <iostream>
using namespace std;
int gaju=35;//global
int main()
{
    //scope variable
  cout<<"******scope variable******\n✔ when you are call global variable then use scope resolution operator[::]\n";
  int gaju=9999;//local
  cout<<"the value of gaju "<<::gaju;
  
  //sizeof size of each variable
  cout<<"\n******sizeof******\nsize of 12 is "<<sizeof(12);
  cout<<"\nsize of 12l or 12L is "<<sizeof(12l);
  cout<<"\nsize of 12.2f or 12.2F is "<<sizeof(12.2f);
  
  cout<<"\n******REFERENCE VARIABLE******";
  int nanu=100;
  int & mamu=nanu;
  //int  mamu=nanu;
  //mamu is reference variableof nanu
  cout<<"\n"<<nanu;
  
  cout<<"\n******TYPECASTING ******\n";
  int a=90;
  cout<<"value of int a "<<a<<" with size "<<sizeof(a);
  cout<<"\nvalue of long a "<<a<<" with size "<<sizeof(long(a));
    return 0;
}
