#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// merge sorted array

    void mergeArray(int arr1[] ,int arr2[], int n1, int n2){
          vector<int>arr3;

          int i=0,j=0;
         while(i < n1 && j <n2){
                if(arr1[i] < arr2[j]){
                    arr3.push_back(arr1[i]);
                    i++;
                }else{
                    arr3.push_back(arr2[j]);
                    j++;
                }

          }

          while(i < n1){
            arr3.push_back(arr1[i]);
            i++;
          }
          while(j < n2){
        arr3.push_back(arr2[j]);
        j++;
    }

        
cout << "Merged Array: ";              
         for(int val : arr3){
       cout << val << " ";
         }

    }  
      
int main(){

    int arr1[] = {1,2,3,0,0,0};
    int arr2[] =  {2,5,6};
 
      int n1=3;
       int n2=3;

       mergeArray(arr1,arr2,n1,n2);

       
}


