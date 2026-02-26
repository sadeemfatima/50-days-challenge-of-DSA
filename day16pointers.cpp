#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a=7;
    int * ptr =&a;
    int** ptr1=&ptr;

     cout << "Value of a = "<< a <<endl;
     cout<< "Address of a = " << &a <<endl;
     cout << "value stored in pointer = " << ptr << endl;
    cout << "Address of pointer = "<< &ptr <<endl;

    //Pointer to pointer
    cout << endl; 
     cout << "Address of pointer to pointer  = "<< &ptr1 <<endl;
      cout << "values stored in  pointer to pointer  = "<< ptr1 <<endl;


    float price = 100.25;
    float*ptr2=&price;

cout << endl;

       cout << "Value of price = "<< price <<endl;
     cout<< "Address of price = " << &price <<endl;
     cout << "value stored in pointer = " << ptr2 << endl;
      cout << "Address of pointer = "<< &ptr2 <<endl;


    
   
}

