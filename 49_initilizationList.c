/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/




class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

Test(int i, int j) : a(i), b(a+j)   <== work
Test(int i, int j) : b(j), a(i+b)    <== value of a show here garbage value beacause of variable a declared first in class

int main()
{
cin>>"we have take a=5 and b=6"<<endl;
    Test t(5, 6);

    return 0;
}
