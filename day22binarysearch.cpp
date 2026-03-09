#include<iostream>
#include<vector>
using namespace std;



bool isvalid(vector<int>& arr, int n, int m, int maxAllowedPages) {
    int student = 1;   
    int pg = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxAllowedPages)
            return false;

        if (pg + arr[i] <= maxAllowedPages) {
            pg += arr[i];
        } else {
            student++;
            pg = arr[i];
        }
    }
    return student <= m;   
}

int allocateBooks(vector<int>& arr, int n, int m) {
    if (m > n) return -1;

    int sum = 0, mx = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        mx = max(mx, arr[i]);
    }

    int st = mx, end = sum, ans = -1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (isvalid(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }
    return ans;
}

int main(){ 
    vector<int>arr={2,1,3,4}; int n = 4, m = 2;
     cout << allocateBooks(arr,n,m) << endl; 
     return 0; }