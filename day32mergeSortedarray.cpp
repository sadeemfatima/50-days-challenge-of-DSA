#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// merge sorted array  with O(n) time complexity and O(1) space complexity

    void mergeArray(int arr1[] ,int arr2[], int n1, int n2){
        int indx= n1+n2-1, i = n1-1 , j=n2-1;

        while(i >= 0 && j >= 0){
            if(arr2[j] >= arr1[i]){
                arr1[indx] = arr2[j];
                j--;

            }else{
               arr1[indx] = arr1[i];
                i--;

            }
            indx--;
        }

        while(j>=0){
            arr1[indx] = arr2[j];
            j--;
            indx--;
        }

        for(int k=0; k < n1+n2; k++){
            cout << arr1[k] << " ";
        }
          
         
    }
int main(){

    int arr1[] = {1,2,3,0,0,0};
    int arr2[] =  {2,5,6};
 
      int n1=3;
       int n2=3;

       mergeArray(arr1,arr2,n1,n2);

       
}


