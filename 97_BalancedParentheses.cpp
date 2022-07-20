#include<bits/stdc++.h>
#include <iostream>
using namespace std;

unordered_map<char,int> symbol={{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}}  ;

//sum of opening and closing brackets is equl to ZERO. 
 string isBalanced(string s){
      stack<char> st;
      for(char bracket :s){
           if(symbol[bracket]<0){
                st.push(bracket);
           }
           else{
                if(st.empty()){
                     return "NO\n";
                }
                else{
                     char top=st.top();
                     st.pop();
                     if(symbol[top]+symbol[bracket]!=0){
                         return "NO\n"; 
                     }
                     
                }
           }
      }
      if(st.empty()){
           return "YES\n";
      }
 }
  
int main()
{
     
     int t;
     cout<<"enter total test cases ";
     cin>>t;
     while(t--){
          string s;
          cout<<"enter string ";
          cin>>s;
          cout<<isBalanced(s)<<endl;
          
     }
     
     
    return 0;
}
