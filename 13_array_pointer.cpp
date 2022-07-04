#include <iostream>
using namespace std;
int main()
{
    int array[]={10,20,30,40,50,60,70,80,90};
    int *add=array;
    for(int i=0;i<9;i++){
        
        cout<<"array="<<array[i]<<" at address " <<add+i*sizeof(int)<<endl;
    }
   return 0;
}
