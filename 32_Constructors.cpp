#include<iostream>
using namespace std;
class default_constructor{
     public:
          // name of constructor is same as class name
          default_constructor(){
               cout<<"hii you are in default constructor   \n"<<endl;
                }
          
};  
class parameteris_constructor{
     public:
          // name of constructor is same as class name
          parameteris_constructor(int a){
               cout<<"hii you are in parameteris constructor with 1 parameter where value is  "<<a<<endl;
                }
          parameteris_constructor(int a,int b){
               cout<<"hii you are in parameteris constructor with 2 parameter where value is  "<<a<<" and "<<b<<endl;
                
          }
};



class Simple{
    int data1;
    int data2;
    int data3;

    public:
        Simple(int a, int b=9, int c=8){
            data1 = a;
            data2 = b;
            data3 = c;
        }

        void printData();

};

void Simple :: printData(){
    cout<<"The value of data1, data2 and data3 is "<<data1<<", "<< data2<<" and "<< data3<<endl;
}


int main(){
     
     default_constructor a;
     parameteris_constructor B0(77);
     parameteris_constructor B1(27,90);//CONSTRUCTOR OVERLOADING
     
     cout<<"\nConstructors With Default Arguments In C++\n";
     Simple s(1);   //Constructors With Default Arguments In C++
     s.printData();
     
}

// it should be declared in the publc section of the class
// they are automatically invoked whenever the object is created
// they cannot return value and do not have return type 
// it have default argument
// we cannot refered to address

