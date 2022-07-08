/*
PROPERTIES OF FRIEND FUNCTION:
o1  NOT IN THE SCOPE OF CLASS I.E.FRIEND FUNCTION IS NOT PART OF CLASS
o2  that's why it can not be called from object of that class
o3  can be invoked without the help of any object
o4  usually contains the objects as arguments
o5  can be declared wherever you want 
o6  it canot access the member directly by their names and object_name.member_name to access any member.

*/

#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        friend complex sumcomplex(complex o1, complex o2);
        //HERE WE HAVE SHOWN FUNCTION SUMCOMPLEX IS FRIEND OF THIS CLASS THATS WHY FRIEND FUNCTION CAN ACCESS ALL THE CONTAIN IN THE CLASS ALSO PRIVATE DATA
        //simillarly we can define other class as FRIEND CLASS Like
        //friend class class_name;
    
        //friend declare within class not depend on class
    
        void setNumber(int n1,int n2){
            a=n1;
            b=n2;
        }
        void printing(){
            cout<<"your complex number is "<<a<<" + "<<b<<"i"<<endl;
            
        }
    
};

//FUNCTION
complex sumcomplex(complex o1, complex o2){
    complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}


int main(){
   complex c1,c2,sum;
   
   c1.setNumber(23,32);
   c1.printing();
   
   c2.setNumber(2,3);
   c2.printing();
   cout<<"after adding sum is"<<endl;
   sum=sumcomplex(c1,c2);

    sum.printing();
    return 0;
}
