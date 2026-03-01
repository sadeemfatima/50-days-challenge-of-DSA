#include<iostream>
using namespace std;

// search in a rotated sorted array

int main(){

    int arr[]={3,4,5,6,7,0,1,2};
    int tar = 0;
    
   int  n = sizeof(arr)/ sizeof(int);

    int start = 0;
    int end = n-1;

    while(start <= end){
        int mid = start + (end - start)/2;

        if (arr[mid] == tar){
            return mid;
        }

        if(arr[start] < arr[mid] ){
            if(arr[start] <= tar && tar <= arr[mid]){
                start = mid -1;
            }else {
                start = mid + 1;
            }
            cout << start;
        } 
        else{
            if(arr[mid] <= tar <= arr[end]){
                start = mid +1;
            }else{
                start = mid- 1;
            }
            cout <<tar;
        }
    }
    return -1;
}