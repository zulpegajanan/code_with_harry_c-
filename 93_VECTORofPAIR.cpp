#include<bits/stdc++.h>
using namespace std;

void printing(vector<pair<int,string>> &v){
     cout<<"\tsize: "<<v.size()<<"\n\tvector: ";
     for(int i=0;i<v.size();i++){
          cout<<v[i].first<<"==>"<<v[i].second<<"  ";
     }
     cout<<endl;
}

int main(){
     //VECTOR OF PAIR
     // vector<pair<int,string>> vp={{1,"ram"},{2,"sham"},{3,"om"},{4,"gajanan"}};
     vector<pair<int,string>> vp;
     int size,x;
     cout<<"enter the size of vector ";
     cin>>size;
     string y;
     for(int i=0;i<size;i++){
           cout<<"\n for vector "<<i<<" enter roll no and name"<<endl;
           cin>>x>>y;
           vp.push_back({x,y});
          //  vp.push_back(make_pair(x,y));
     }
     printing(vp);
     
     
     
}
