#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
// Sort an array of 0s 1s & 2s

void sortArray(int arr[] ,int n){

  int count0 =0, count1=0, count2=0;
  for(int i=0; i<n; i++){

    if(arr[i] == 0) count0++;
    else if(arr[i] == 1) count1++;
    else  count2++;
     }

  vector<int>indx;
  for(int i=0; i<count0; i++){
      indx.push_back(0);
  }
  for(int i=0; i<count1; i++){
      indx.push_back(1);
  }
  for(int i=0; i<count2; i++){
      indx.push_back(2);
  }

  for(int value : indx){
    cout << value << " ";
  }
}



int main(){

  int arr[] = {2,0,2,1,1,0,1,2,0,0};
     // int arr[] = {1,5,4,6,7};
      int n=sizeof(arr)/sizeof(int);

     sortArray(arr,n);

      
}

