
#include<iostream>
using namespace std;

//FUNCTION PROTOCAL
//when we declare function after calling then this will generate an error
//that's why we use function pretocal.
//int sum(int aaaa,int bbbb);
//int sum(int , int );


int sum(int a,int b){
	//a & b ARE FORMAL PARAMETER
	return a+b;
}

int main(){
	int n1,n2;
	cout<<"enter any two number\n";
	cin>>n1>>n2;

	cout<<"the sum is "<<sum(n1,n2);
	//n1 & n2 ARE ACTUAL PARAMETERS
	return 0;
}
