#include<iostream>
using namespace std;

void swap_callByValue(int a,int b){
	
	int temp=a;
	a=b;
	b=temp;
}

void swap_callByReference(int* a,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void swap_usingReferenceVariable(int & a,int & b){
	int temp=a;
	a=b;
	b=temp;
}

int main(){
	
	int x=69,y=96;
	cout<<"the values of x & y are "<<x<<"  "<<y;

	swap_callByValue(x,y);
	cout<<"\n❌ the values of x & y are "<<x<<"  "<<y;
		//THIS WILL NOT WORK FOR SWAPING.

	swap_callByReference(&x,&y);
	cout<<"\n✔ the values of x & y are "<<x<<"  "<<y;
		//THIS WILL WORK FOR SWAPING.

	swap_usingReferenceVariable(x,y);
	cout<<"\n✔ the values of x & y are "<<x<<"  "<<y;
		//THIS WILL  WORK FOR SWAPING.
		//THIS CONSEPT IS NOT IN C LANGUAGE .
	

	return 0;
}
