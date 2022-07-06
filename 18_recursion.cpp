/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int  recursion_facto(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*recursion_facto(n-1);
}

int rec_fibo(int n){
    if(n==0 || n==1){
        return 1;
    }
    return rec_fibo(n-1)+rec_fibo(n-2);
}


int main()
{
    
    cout<<"\nfactorial of 3="<<recursion_facto(3)<<endl;
    
    cout<<"fibonacci series is"<<endl;
    for(int i=0;i<10;i++){
        cout<<rec_fibo(i)<<"  ";
    }
    cout<<"\n n(=4)'th term of fibonacci. series "<<rec_fibo(4);
    
    
    
    return 0;
}
