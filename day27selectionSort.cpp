#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//Selection Sort 

void selectionSort(int arr[], int n ){

    for(int i=0 ; i< n-1; i++){
        int smallestIndex = i;

         for(int j=i+1; j<n; j++){
            if(arr[j] < arr[smallestIndex]){
                smallestIndex = j;

            }
         }
         swap(arr[i], arr[smallestIndex]);
    }
}


void printArray(int arr[],int n){

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main(){

      int arr[] = {1,5,4,6,7};
      int n=sizeof(arr)/sizeof(int);

       selectionSort(arr ,n);
       printArray(arr,n);
}