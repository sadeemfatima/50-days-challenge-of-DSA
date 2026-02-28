#include<iostream>
#include<vector>
using namespace std;

/* optimize way to write mid formula is mid = start + (end-start)/2 instead of mid = (start + end)/2 
to avoid overflow 
in case we have start = MAX_INT and end = MAX_INT  */

// time complexity is O(log n) 
// Binary search is optimize way of searching as compare to linear search where time complexity is O(n)

int binarySearch(vector<int> arr , int target){
    int st = 0, end= arr.size()-1;
    while(st <= end){
       int  mid = (st+end)/2;
        if(arr[mid] < target){
             st = mid + 1;
        } else if (arr[mid] > target ){
            end = mid -1 ;
        }
        else {
            return mid;
        }
    }
    return -1;

}

// Binary Search 
int main(){
vector<int>arr1={-1,0,3,4,5,9,12};
int tar1=9;

int ans1 = binarySearch(arr1,tar1);
cout << "Target is at index "<< ans1 <<endl;

vector<int>arr2={-1,0,3,5,9,12};
int tar2=5;

int ans2 = binarySearch(arr2,tar2);
cout << "Target is at index "<< ans2 <<endl;

}