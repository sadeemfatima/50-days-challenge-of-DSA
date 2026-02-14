#include<iostream>
#include<vector>
using namespace std;


// Vectors 
 
int main(){

    // declration and initialization of vector

    vector<int>vec = {1,2,3};
    cout<< "1st index value is " << vec[0] << endl;

    //for repeated elements 
    vector<int>vect(3,1);
     
    //for each loop
    cout << "values of 1st vector are " << endl ;
    for(int val : vec){
        cout << val << endl;
    }

    cout << "values of 2nd vector are " << endl;

    for(int val : vect){
        cout << val << endl;
    }

   
   }