
#include <iostream>
using namespace std;
  
int main()
{
     stack<int> s;
     
     //INSERT VALUE IN STACK
     s.push(1);
     s.push(2);
     s.push(3);
     
     //POP ALL VALUE FROM TOP
     while(!s.empty()){
          cout<<"now top is "<<s.top()<<endl;
          s.pop();
     }
     
     
     
     //////////////////////QUEUE////////////////////////
    queue<string> q;
    q.push("ram");
    q.push("sham");
    q.push("om");
    
    
    while(!q.empty()){
         cout<<"now front is "<<q.front()<<endl;
          q.pop();
    }
  
    return 0;
}
