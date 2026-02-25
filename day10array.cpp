#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Brute force approach
//Pair sum: Return pair in sorted array with target sum
// Moore's voting algorithm

/*vector<int> pairSum(vector<int>nums, int target) {
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
       for(int j=i+1; j<nums.size(); j++){
            if(nums[i]+ nums[j] == target){
               ans.push_back(i);
              ans.push_back(j);

              return ans;
            }
        }

    }}*/

vector<int> pairSum(vector<int>arr , int target){
    int n = arr.size();
    int i=0; int j=n-1;
    
    vector<int>ans;
    while(i<j){
        int sumofpair = arr[i] + arr[j];
         if(sumofpair > target){
            j--;
         }else if(sumofpair < target ){
            i++;
         }else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
         }
    }

    return ans;


}

// Majority Element in arr[]= {1,2,2,1,1}
int majElement(vector<int>nums){
    int n= nums.size();
    for(int i=0; i<n; i++){
        int count=1;
        for(int j=i+1; j<n; j++){
            if(nums[i]== nums[j]){
                count ++;
            }

        }
        if(count > n/2){
            cout <<"Occurence = " << count <<" times " <<endl;
            return nums[i];
        }
    }
    return -1;
}

int main(){
   // vector<int>arr = {2,7,11,15};
    
    //vector<int>output = pairSum(arr,18);
    //cout << output[0] <<" " << output[1];


    vector<int>nums = {2,1,2,2,1,2};
    int n=nums.size();
   // sorting 
  /* sort(nums.begin(),nums.end());

   int freq=1; 
   int ans=nums[0];
   for(int i=1; i<n; i++){
           if(nums[i]== nums[i-1]){
            freq++;
           }else {
             freq=1;
             ans =nums[i];
           }
           if (freq > n/2){
            cout << ans;
           }
   }
   return ans;*/

   int freq = 0 , ans=0;
   for(int i=0; i<n; i++){
    if(freq == 0){
        ans = nums[i];
    }
    if (ans == nums[i]){
        freq++;
    }else {
        freq--;
    }
   }
   cout << ans;

}
    
    
   