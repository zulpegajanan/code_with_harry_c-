#include<bits/stdc++.h>
using namespace std;

void printing(vector<int> v){
     for(int i=0;i<v.size();i++){
          
          cout<<v[i]<<" ";
          //cout<<v.at[i]<<" ";
     }
     cout<<endl;
}

int main(){
     
     vector<int> vect;
     int size,x;
     cout<<"enetr the size of vector  ";
     cin >> size;
     
     for(int i=0;i<size;i++){
          cout<<"enter the value ";
          cin>>x;
          vect.push_back(x); //insert value at the end with timecomplexity O(1) 
          cout<<"\tsize is "<<vect.size()<<" vector is ";
          printing(vect);
     }
     
     cout<<"\n\n\nsuppose we declare vector with with size 5 with all value 3(default value is 0)";
     vector<int> v1(5,3);
     //vector<int> v1(5);   (default value is 0)
     cout<<endl;
     cout<<"\tsize is "<<v1.size()<<" vector v1 is ";
     printing(v1);
     
     cout<<"now we insert 99 in vector"<<endl;
     v1.push_back(99);
     cout<<"\tsize is "<<v1.size()<<" vector v1 is ";
     printing(v1);
     
     // cout<<"\n NOW i wnat to insert 88 at 0'th position and 77 at 1'st position";
     // vector<int>::iterator iter;
     // iter=v1.begin();
     // v1.insert<iter,88>;
     // iter++;
     // //but iter=iter+1 IS NOT ALLOWED;
     // v1.insert<iter,77>;
     // printing(v1);
     
     
     
     cout<<"\nnow we delete 99(LAST VALUE FROM VECTOR) from the vector"<<endl;
     v1.pop_back();    //timecomplexity O(1)
     cout<<"\tsize is "<<v1.size()<<" vector v1 is ";
     printing(v1);
     
     cout<<"\n\ncreating vector copy v2 of v1"<<endl;
     vector<int> v2=v1;   //timecomplexity O(n)
     printing(v2);
     
     
     
}
