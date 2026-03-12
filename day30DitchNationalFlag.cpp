#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// Ditch National Flag Algorithm

void sortArray(int arr[] ,int n){
 int mid=0,high=n-1,low=0;
  while (mid<=high)
  {
    if(arr[mid]==0){
      swap(arr[mid],arr[low]);
        low++;
        mid++;
      }

        else if(arr[mid] == 1){
          mid++;
        }
        else if(arr[mid] == 2){
          swap(arr[mid],arr[high]);
          high--;
        }}
      
    }
  
      
int main(){

    int arr[] = {2,0,2,1,1,0,1,2,0,0};
     
      int n=sizeof(arr)/sizeof(int);
       sortArray(arr,n);

       cout << "Sorted Array: ";              
         for(int i = 0; i < n; i++){
       cout << arr[i] << " ";
      
}
return 0;
}

