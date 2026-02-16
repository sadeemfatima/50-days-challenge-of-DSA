#include<iostream>
#include<vector>
using namespace std;

/*Question
Given an array of integers nums and an integer target,
 return indices of the two numbers such that they add up to target.*/ 

vector<int> twosum(vector<int>nums, int target){

    for(int i=0; i<=nums.size()-1; i++){
        for(int j=i+1; j<nums.size(); j++){
            if(nums[i] + nums[j] == target){

                return  {i, j};
                   
            }
        }
    }
    return {};

}


int main(){

    vector<int>nums={3,2,4};
    int target=6 ;
    vector<int>ans = twosum(nums,target);
    cout << ans[0] << " " << ans[1] << " ";
   
   

}