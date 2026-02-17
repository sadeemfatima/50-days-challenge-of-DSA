#include<iostream>
#include<vector>
using namespace std;

/*Given two integer arrays nums1 and nums2, return an array of their intersection.
 Each element in the result must be unique and you may return the result in any order.*/

 
 vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>result;
        for(int i=0; i<nums1.size(); i++){
          
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i] == nums2[j] ){

                    bool already=false;
                    for(int k=0; k< result.size(); k++){
                        if(result[k]== nums1[i]){
                        already = true;

                        break;
                    }
                  
                   }
                    if(!already){
                  result.push_back(nums1[i]);
                }
            }
        }
       
    } return result;

    }


int main(){

   
    vector<int>num1 = {1,2,3,4};
    vector<int>num2 = {1,2,2,1};
     
     intersection(num1,num2);

}