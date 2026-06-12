#include <bits/stdc++.h>
using namespace std;

int moves(vector<int> arr,int n){
    vector<int> temp = arr;
    sort(temp.begin(),temp.end());
    if(temp != arr) return 0;
    int diff = INT_MAX;
    for(int i = 1 ;i<n;i++) diff = min(diff,arr[i]-arr[i-1]);
    return diff/2 + 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> arr(n);
    for(int i =0 ; i < n ; i++) cin >> arr[i];
   cout << moves(arr,n) << "\n";
    }
}