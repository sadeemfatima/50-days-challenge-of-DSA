#include<iostream>
#include<vector>
using namespace std;

// Painter's Partation Problem

bool isPossible(vector<int>arr,int m,int n,int maxTimeAllowed){
int painter = 1, time = 0;

for(int i=0; i<n; i++){
    if(time + arr[i] <= maxTimeAllowed){
        time += arr[i];
    }else{
        painter++;
        time = arr[i];
    }
}

    return painter <= m;
}


int minTimeToPaint(vector<int>arr,int m,int n){
   int sum=0, maxVal=0;
   for(int i=0; i<n; i++){
       sum = sum+arr[i];
       maxVal = max(maxVal,arr[i]);
   }
   int st=maxVal, end = sum, ans = -1;

   while(st <= end){
   int  mid = st+ (end-st)/2;

    if(isPossible(arr,m, n,mid)){
        ans=mid;
        end = mid-1;
    }else{
        st=mid+1;
    }
   }

   return ans;
}
int main(){

    vector<int>arr = {40,30,10,20};
    int n=4;
    int m=2;

    cout << minTimeToPaint(arr,m,n) << endl;
    return 0;


}