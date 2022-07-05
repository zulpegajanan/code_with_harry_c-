
#include<iostream>
using namespace std;

int function_withSTATIC(){
    static int c=0;//EXECUTE ONLY ONE TIME
    c=c+1;
    return c;
}

int function_withOUTSTATIC(){
    int c=0;
    c=c+1;
    return c;
}

int main(){
    cout<<"with static variable(STATIC VARIABLE EXECUTE ONLY ONE TIME)\n";
    for(int i=0;i<5;i++){
        cout<<function_withSTATIC()<<"\t";
    }
    cout<<"\nwithout static variable\n";
    for(int i=0;i<5;i++){
        cout<<function_withOUTSTATIC()<<"\t";
    }
	return 0;
}








