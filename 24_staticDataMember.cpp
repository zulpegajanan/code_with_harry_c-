#include<iostream>
using namespace std;
static int count=1;//DEAFAULT  VALUE IS 0
class employee{
    int id;
    
    public :
        void setData(){
             cout<<"enter your ID "<<endl;
            cin>>id;
        }
        void getData(){
            cout<<count<<" ID  of this employee is "<<id<<endl;
            count=count+1;
        }
};

int main(){
   
   employee gajanan,nagnath,vishwanth;
   
   gajanan.setData();
   gajanan.getData();
   
   nagnath.setData();
   nagnath.getData();
   
   vishwanth.setData();
   vishwanth.getData();
   
   cout<<"therre are total "<<count-1<<" employees";
    return 0;
}
