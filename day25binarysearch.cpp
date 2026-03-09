#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/* Aggressive Cow's problem
 Assign C cows to N stalls such that min distance between them is largest possible. 
Return Largest Mimum distance.*/

bool isPossible(vector<int> arr,int stall,int C , int maxAllowedValue){
 int cows =1;
  int currentValue = arr[0];
 for(int i=1; i< stall; i++) {
    if( arr[i] - currentValue >= maxAllowedValue){
         cows ++;
         currentValue = arr[i];
    }

    if( cows == C ){
        return true;
    }
    

} return false;
}

int  maxDistance(vector<int> arr , int stalls ,int cows){
 sort(arr.begin(), arr.end());
 int n = arr.size();
 int ans = -1;

 int st = arr[0], end = arr[n-1] - st;


 while(st <= end ){
     int mid = st + (end - st)/2;
    if(isPossible(arr,stalls,cows,mid)){
        ans = mid;
        st = mid+1;

    }else{
        end = mid-1; 
    }
    
 }
 return ans;

}

int main(){

    vector<int>arr = {1,2,8,4,9};
    int stalls =5, cows=3;

    cout << maxDistance(arr,stalls,cows) << endl;

}