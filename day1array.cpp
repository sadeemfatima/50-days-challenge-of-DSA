/*Day 1/50
         by Apna College
                           Arrays*/



#include <iostream>
using namespace std;

// Question#01 linear search algorithm  arr[]={4,2,7,8,1,2,5} targer=8

/*int linearSearch(int arr[],int sz, int target){

    for ( int i = 0 ; i<sz; i++){
        if (arr[i]== target){
            cout << i << endl;
            
           
        return 1 ;
            
        }
        
}
return -1;
}

int main(){
    int arr[] = {4,2,7,8,1,2,5};
    
    int target = 5 ;
    int sz = 7;

     linearSearch(arr,sz,target);
    return 0;

        
}

// Question #02 Reverse an array arr[]= {5,2,1,8,7,2,4}

void reverseArray(int arr[], int sz){

    int start=0;
    int end = sz-1;

while(start< end ){
    
        swap( arr[start], arr[end]);
        start++;
        end-- ;       
    
}}

int main(){

int arr[]= { 5,2,1,8,7,2,4};
int sz = 7;
int sum=0;
int product = 1;
int max= arr[0];
int min= arr[0];
int indx1 = 0;
int indx2=0;

 reverseArray(arr,sz);

 for(int i =0 ; i < sz ; i++){
    cout<< arr[i] << " " ;
    
 }


// Question#03 calculate sum and product of numbers in an array


for ( int i=0 ; i < sz; i++){
         sum= sum+ arr[i];
}
cout << endl;
cout << sum << " ";

for( int i = 0; i<sz; i++ ){
    product = product * arr[i];


}
     cout << endl;
   cout << product ;



   // Question#04 Swap max and min number of an array 
   for( int i = 0; i<sz; i++ ){

        if(arr[i]> max ){
            max= arr[i];
            indx1 =i;
        }
            
            

         if (arr[i]< min){
                min = arr[i];
                indx2 = i ;
                
            }

           
        }
        cout << endl;
            cout << max << endl;
            cout << indx1   ;
            cout << endl;
            cout << min << endl ;
            cout << indx2 ; 

            swap(max, min);

            cout << endl;
            cout << arr << endl ;
    }*/

int arr[]= { 5,6,9,2,7,8,8};
int sz = 7;
int maxNumber  = arr[0];
int minNumber = arr[0];
int indxMax = 0 ;
int indxMin = 0;

    int main(){

        cout << "Origional array ";

        for(int i = 0 ; i<=sz-1 ; i++){
             

                cout  << arr[i] << " " ;
             
            if(arr[i] > maxNumber ){
                maxNumber = arr[i];
                indxMax = i;
            }

            if(arr[i] < minNumber ){
                minNumber = arr[i];
                indxMin = i;
            }

        }
        cout << endl;
        cout << "Maximum number is " << maxNumber << endl ;
        cout << "Maximum number index is  " <<  indxMax << endl  ;

        cout << "Minimum number is " << minNumber << endl ;
        cout << "Minimum number index is " << indxMin << endl ;

        swap(arr[indxMax] , arr[indxMin]);

        cout << " Array after swaping max and min numbers ";

        for(int i = 0 ; i<=sz-1 ; i++){
            cout << arr[i] << " " ;
        }

// Print all unique values in an array 

cout << endl;
cout << "unique values in an array are ";

            for(int i = 0 ; i<=sz-1 ; i++){
                     
                     

                     if (arr[i] != arr[i+1]){
                        cout << arr[i] << " ";

                     }


                 
            }


        // Print intersection of 2 arrays
cout << endl ;
        int arr1[] = {2,4,6,8};
        int sz1 = 4;
        int arr2[] = {1,3,5,9};
        int sz2 = 4;
        int i = arr1[0];
        int j= arr2[0];

        /*for(int i=0; i<=sz1-1; i++){
            cout << arr1[i] ;

           for(int j=0; j<=sz2-1; j++){
                    cout << arr2[j] << " ";
                    return 0;
                }
                cout << arr[i] << " " ;
         }*/

         while (i <= sz1-1){
            // cout << arr[i] << " ";

                   for(int j=0; j<=sz2-1; j++){
                    cout << arr2[j] << " ";
                    ===
                   
                    
                }
                

              
         }

        
    }
   
    

    







