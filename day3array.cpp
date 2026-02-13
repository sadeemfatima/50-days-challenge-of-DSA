// Day#03 of learning DSA (Arrays)

#include<iostream>
using namespace std;


// Tasks of day#03.


//Q#01 Intersection of two arrays.
//Q#02  array nums of size n, return the majority element. 



// Question#01  intersection of two arrays

int main(){

int array1[] = {1,2,3,4};
int array2[] = {3,4,5,6};

int sz1=4;
int sz2=4;

for(int i=0; i<sz1; i++){
     for(int j=0; j<sz2; j++){
        if(array1[i] == array2[j]){
            cout  <<array1[i];
        
     }
    }}

    

// Question#02 find the element which is repeated more than other element, in an array

int arr3[] = {1,1,2,2,2,3,4,1,1,1};
int sz3  = sizeof(arr3)/sizeof(int);

int maxElement= 0;
int result =0;

   for (int i=0; i<sz3; i++){
    int count =0;  // reset for each element
   
      for(int j=0; j<=sz3-1; j++){
    if(arr3[i] == arr3[j]){
          count ++;
           }
        }
        if (count > maxElement){
            maxElement = count ;
            result = arr3[i];
              
        }

    } 
    cout << endl;
    cout <<" max element is " << result << " whis is repeated " << maxElement << " times.";
    return 0;
}










            



             

        
            
        


