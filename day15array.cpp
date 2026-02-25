#include<iostream>
#include<vector>
using namespace std;

//  Product of array except self  
// time complexity is O(n)

int main(){
     int nums[] = {1,2,3,4};
     vector<int>answer;
     int n = sizeof(nums)/ sizeof(int);
       vector<int>prefix(n,1);
       vector<int>sufix(n,1);

        for(int i=1; i<n; i++){

            prefix[i]= prefix[i-1] * nums[i-1];
            cout << prefix[i]<< " ";
            
}     

cout << endl;
        for(int i=n-2; i>=0; i--){
            sufix[i] = sufix[i+1] * nums[i+1];
            cout << sufix[i] <<" ";
        }
        cout << endl;
        for (int i=0; i<n; i++){
            answer[i] = sufix[i]*prefix[i];
            cout << answer[i] << " ";
        }
        cout << endl;
        return {};

}