#include<iostream>
using namespace std;

// Maximum SubArray Sum
int main(){
int n=7;

int arr[]={3,-4,5,4,-1,7,-8};
int currSum=0;
int maxSum= 0;

// Possible subarrays n*(n+1)/2 => 7*8/2 =>28 possible arrays are there 
// Brute force approach

/*for(int st=0; st<n; st++){
    int currSum =0;

    for(int end=st; end<n; end++){

        currSum =currSum+ arr[end];
        maxSum= max(currSum,maxSum);
    }
}  
    cout <<"Maximum subarray value is = "<< maxSum << endl;*/

    // Using kadane's algorithm
    // set negitive value to zero

    for(int st=0; st<n; st++){

        currSum+=arr[st];
        maxSum=max(currSum,maxSum);

        if(currSum<0){
            currSum=0;
        }
    }
    cout <<"Maximum subarray value is = "<< maxSum << endl;

}

