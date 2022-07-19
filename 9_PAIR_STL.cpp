#include<bits/stdc++.h>
using namespace std;

int main(){
     //HOW TO INITILISE PAIR
     pair<int,string> p;
     
     //HOW TO ASSIGN VALUE 
     
     p=make_pair(62,"gajanan");
     //p={62,"gajanan"}
     //cin>>p.first;
     //cin>>p.second;
     
     //HOW TO PRINT MEMBER OF PAIR
     cout<<p.first<<" "<<p.second<<endl;
     
     //HOW TO CREATE REFERENCE OF PAIR
     pair<int,string> &p0=p;
     
     //HOW TO COPY PAIR P INTO PAIR P1;
     pair<int,string> p1=p;
     
     
     //EXAMPLE
     // int rollNo[]={1,2,3};
     // string name[]={"sourabh","anuska","devkumar"};
     // int num=3;
     // pair<int,string> register[3];
     
     // // register[0]={1,"sourabh"};
     // // register[1]={1,"anuska"};
     // // register[2]={1,"devkumar"};
     
     // for(int i=0;i<3;i++){
     //      cout<<register.first<<" "<<register.second<<endl;
     // }
     pair<int,string> q;
     q={1,"sourabh"};
     cout<<q.first<<" "<<q.second<<endl;
     
     cout<<"after swaping pair p and q are"<<endl;
     swap(p,q);
     cout<<p.first<<" "<<p.second<<endl;
     cout<<q.first<<" "<<q.second<<endl;
     


}
