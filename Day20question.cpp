#include<iostream>
using namespace std;

// Peak Index in Mountain Array

int main(){

    int arr[] = {0,3,9,8,5,2};
    int n = 6;
    int start = 1 ;
    int end = n-2;

    while(start < end){

        int mid = start + (end - start)/2;

        if(arr[mid-1] < arr[mid] > arr[mid+1]){
            return mid;
        }

        if(arr[mid-1] < arr[mid]){
            start = mid+1;
        }else{
            end = mid - 1;
        }

    }

   cout << "Peak Index = " << start;

}