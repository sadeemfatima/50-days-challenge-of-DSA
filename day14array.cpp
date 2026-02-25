#include<iostream>
#include<vector>
using namespace std;

//  Product of array except self  
// time complexity is O(n square)

int main(){
     int nums[] = {1,2,3,4};
     vector<int>answer;
     int n = sizeof(nums)/ sizeof(int);
       

        for(int i=0; i<n; i++){
            int product =1;
           for(int j=0; j<n; j++){
            if(nums[i] != nums[j]){
                product *= nums[j];
            }
            
           }
           answer.push_back(product);
        }
        cout << " product of array is ";
        for(int val : answer ){
            cout << val << " ";
        }


}