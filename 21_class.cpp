#include <iostream>
using namespace std;

class employee{
    private: int a,b,c;
    public: int d,e;
    void setData(int a1,int b1,int c1);
        //here i have not defined any contained in method
        //just declaration
    void getdata(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;
    }
};

//NOTE==>THING THAT ARE DIFFERENT FROM OOP IN JAVA 
//SEMICOLON AT THE END OF CLASS  
//AFTER WRITING ACCESS SPECIFIERYOU HAVE TO WRITE ":"
void employee::setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
    
}

int main()
{
    employee gajanan;
    gajanan.d=90;
    gajanan.e=92;
    /*
        ERROR WILL GENERATE BECAUSE OF A,B,C ARE PRIVATE VARIABLE OF CLASS
        gajanan.a=90;
        gajanan.b=78;
        gajanan.c=87;
    */
    
    gajanan.setData(435,56,76);
    
    gajanan.getdata();
    return 0;
}

