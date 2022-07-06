#include<iostream>
using namespace std;

class employee{
    int id;
    public :
        void setData(){
            cout<<"enter your ID "<<endl;
            cin>>id;
        }
        void getData(){
            cout<<"ID  of this employee is "<<id<<endl;
        }
};

int main(){
   int n;
   cout<<"enter total number of employee ";
   cin>>n;
   
   employee arr[n];
   for(int i=0;i<n;i++){
       arr[i].setData();
       arr[i].getData();   
   }

    return 0;
}
