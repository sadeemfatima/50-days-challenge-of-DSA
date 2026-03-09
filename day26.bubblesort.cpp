#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//Bubble Sort 

void bubbleSort(int arr[],int n){

    bool isSwap = false;

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }

        if (!isSwap ){
            return;
        }
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

       bubbleSort(arr,n);
       printArray(arr,n);
}