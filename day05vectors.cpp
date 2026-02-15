#include<iostream>
#include<vector>
using namespace std;

//Vector functions size() , push-back(n), pop-back(), front() , back() , at(i) ,capacity()
// Static(compile time ),stack, int arr[5] vs Dynamic memory(run-time),heap, vec.push-back(25)
// Difference between size and capacity(*2)
// Single number problem
// XOR n^n=0 n^1=n (same elements = 0)
// Homework problems Q1: linear search on vector Q2: reverse code 



/* Question 1:: 
Given a non-emty array of integers nums ,
every element appears twice except for one.
Find the single one ?
solve using linear run-time complexity. */

void solve( vector<int>&nums){
         //$ is used for pass by refrence 
         int ans =0;
   for(int val: nums){
     ans=ans^val;
   }
   cout<< "Single number is " <<  ans << endl;
}



// Question#02 linear search on vector 
void linearSearch(vector<int>linearvec,int target){
   
    for(int val: linearvec){
        if(val== target){
            cout<<"we found target "<<  val << endl;
            return;
        }

    } cout << "Item not found" <<endl;
    
}


//Question#03 Travese the array 
void vecTraverse(vector<int>numbs,int sz){
    for(int i = sz-1; i>=numbs[0]; i--){
        cout<<i << " " ;
    }
}




int main(){
   vector<char>vec(5,'s');

   cout <<endl;
   vector<int>numbs={1,2,3,4,5,6,7};
   vecTraverse(numbs,numbs.size());

   cout <<endl;
    vector<int>linearvec={1,2,3,4,5};
   linearSearch(linearvec,7);

vector<int>nums = {1,4,1,4,2};
   solve(nums);


   vector<int>vec1;

   vec1.push_back(10);
    vec1.push_back(20);
     vec1.push_back(30);
      vec1.push_back(40);
       vec1.push_back(50);
        vec1.pop_back(); 
        //vec1.push-back();



   cout << "size = " << vec1.size() << endl;
   cout << "capacity = " << vec1.capacity() << endl;

   for(char val: vec){
    cout << val ;
   }
 cout << endl;
   vec.push_back('a');
   cout << "size = " << vec.size() << endl;
   for(char val: vec){
    cout << val ;
   }
cout << endl;
 vec.pop_back();
 cout << "size = " << vec.size() << endl;
 
   for(char val: vec){
    cout << val ;
   }
cout << endl;
   cout<< "first value is " << vec.front() << endl;
   vec.push_back('d');
   cout << "last value is " << vec.back() << endl;

   cout  << "Index 5 of vector is "<< vec[5] << endl;
   cout << "Index 5 of vector is "<< vec.at(5) << endl;

}




    




