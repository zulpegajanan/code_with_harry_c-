#include<bits/stdc++.h>
using namespace std;

void printing(vector<int> &v){
     cout<<v.size()<<"\t";
     for(int i=0;i<v.size();i++){
          cout<<v[i]<<" ";
     }
     cout<<endl;
}

int main(){
     //ARRAY OF vector
     cout<<"how many vector you want to create ";
     int n;
     cin>>n;
     vector<int> v[n];
     int size;
     for(int i=0;i<n;i++){
          cout<<"\n enter the size of vector "<<i<<" ";
          
          cin>>size;
          for(int j=0;j<size;j++){
               int x;
               cout<<"enter value at vector_"<<i<< " and at position "<<j<<" ";
               cin>>x;
               v[i].push_back(x);
          }
          cout<<endl;
     }
     cout<<"\n=============================correct=============================\n";
     cout<<"arr\t size\t vertex\n";
     
     for(int i=0;i<n;i++){
          cout<<i<<"\t";
          printing(v[i]);
     }
     
     
     cout<<"\n=============================incorrect=============================\n";
     cout<<"=====================SIZE OF VECTOR WILL BE SIZE OF LAST VECTOR (2d converted)=====================\n";
     cout<<"arr \t size\t vector\n";
     for(int i=0;i<n;i++){
          cout<<i<<"\t"<<size<<"\t";
          for(int j=0;j<size;j++){
               cout<<v[i][j]<<" ";
          }
            cout<<endl;
     }
     
     
}


























how many vector you want to create 3

 enter the size of vector 0 2
enter value at vector_0 and at position 0 2
enter value at vector_0 and at position 1 2


 enter the size of vector 1 3
enter value at vector_1 and at position 0 3
enter value at vector_1 and at position 1 3
enter value at vector_1 and at position 2 3


 enter the size of vector 2 4
enter value at vector_2 and at position 0 4
enter value at vector_2 and at position 1 4
enter value at vector_2 and at position 2 4
enter value at vector_2 and at position 3 4


=============================correct=============================
arr	 size	 vertex
0	2	2 2 
1	3	3 3 3 
2	4	4 4 4 4 

=============================incorrect=============================
=====================SIZE OF VECTOR WILL BE SIZE OF LAST VECTOR (2d converted)=====================
arr 	 size	 vector
0	4	2 2 0 0 
1	4	3 3 3 0 
2	4	4 4 4 4 
