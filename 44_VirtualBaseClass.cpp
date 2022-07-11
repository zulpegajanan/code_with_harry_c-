#include <iostream> 
using namespace std; 

// Consider the situation where we have one class A .
// This class is A is inherited by two other classes B and C. 
// Both these class are inherited into another in a new class D 
       A
    /    \
  B        C
    \   /
      D


class A { 
public: 
    void show() 
    { 
        cout << "Hello world"<<endl; 
    } 
}; 
class B : public virtual A { 
};   
class C : public virtual A { 
};   
class D : public B, public C { 
}; 

int main()
{
    D object;
    object.show();
}
