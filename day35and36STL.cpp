#include<iostream>
#include<vector>
using namespace std;

// STL Standard Templete Library
// Container name Vector

int main(){

    vector<int>a={1,2,3,4,5};
    vector<int>vec(3,1);
    vector<int>vec1(a);

    cout << a.size() << endl;
    cout<<a.capacity()<<endl;

a.push_back(8);
cout<<a.capacity()<<endl;
cout <<a[5]<<endl;
cout<<a.at(5)<<endl;
    a.emplace_back(7);
    for(int val: a){
        cout<<val<<" ";
         }

    cout << endl;

    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    
    // costly functions (erase , insert) 
    // clear , empty
    // erase and clear can change size but not capacity
    //Iterators vec.begin() ; vec.end();

 a.erase(a.begin()+3,a.begin()+5);
 
    for(int val : a){
        cout << val << " ";
    }
    cout<<endl;

    a.insert(a.begin()+2,89);
 
    for(int val : a){
        cout << val << " ";
    }
    cout<<endl;

    a.clear();

   

    cout<<a.capacity()<<endl;
    cout<<a.size()<<endl;

   cout<< a.empty() << endl;

   cout << *(vec.begin());
   cout << *(a.end());

   

}