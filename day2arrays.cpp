// Day2 of learning DSA (Arrays)

#include<iostream>
using namespace std;

// what i learned   ** sizeof function used to calculate size of an array in bits 

// Task of day#02.

//Q#01 Union of array.

//Question#01

int main(){

    int array[]={1,2,3,4};
    int array2[]={5,7,6,8};

    int size= sizeof(array);
    cout << size << endl;

    

    int sz=4;
    int sz2=4;

    for(int i=0; i<sz; i++){

         cout<< array[i] << " " ;
    }
        
       for(int j=0; j<sz2; j++){

        bool found = false;
            for(int i=0; i<sz; i++){
                if(array[i] == array2[j]){
                    
                    found=true;
                    break;
                }

            }
            // Decision AFTER checking
        if(!found){
            cout << array2[j] << " ";
        }
        }}



