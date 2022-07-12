#include<iostream>
using namespace std;

// 'new' and 'delete' both are operator and keyword


int main(){
    // Basic Example
    int a = 4;
    int* ptr = &a;
    cout<<"The value of a is "<<*(ptr)<<endl;
    
      
    float *p = new float(40.78);
    cout << "The value at address p is " << *(p) << endl;
    
    
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    
    
    int *array = new int[3];
    array[0] = 10;
    array[1] = 20;
    array[2] = 30;
    delete[] array;
    cout << "The value of array[0] is " << array[0] << endl;
    cout << "The value of array[1] is " << array[1] << endl;
    cout << "The value of array[2] is " << array[2] << endl;
   
   
   
   
  
    return 0;
}
