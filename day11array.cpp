#include<iostream>
using namespace std;

// stock buy and sell prices ={7,1,5,3,6,4}, return max profit 
int main(){
int arr[]={7,1,5,3,6,4};
int n=6;
 int maxProfit = 0;
 int bestBuy = arr[0];

for(int i=1; i<n; i++){
    if(arr[i] > bestBuy){
        maxProfit = max(maxProfit, arr[i]-bestBuy);
    }
    bestBuy=min(bestBuy,arr[i]);
    
}
cout << "maximum profit = "<< maxProfit;
}