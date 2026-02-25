#include<iostream>
using namespace std;

// Container with most water  by using
 //brute force approch
 //two pointer approach 

int main(){
    int arr[] = {1,8,6,2,4,8,3,7};
    int n = 8;
    int maxheight = 0;
    int leftPointer=0;
    int rightPtr = n-1;
    
while(leftPointer < rightPtr ){
    
              int width= rightPtr - leftPointer;
            int height = min(arr[rightPtr], arr[leftPointer]);
            int area = width* height;
            maxheight = max(area,maxheight);

            if(arr[leftPointer] < arr[rightPtr]){
                   leftPointer++;
            }else{
                rightPtr--;
            }
        }
        cout << maxheight;
    }

    

   /* for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int width= j-i;
            int height = min(arr[i], arr[j]);
            int area = width* height;
            maxheight = max(area,maxheight);
            
        }
    }

    cout<< "maximum height = "<< maxheight;*/

    // Two pointer app


