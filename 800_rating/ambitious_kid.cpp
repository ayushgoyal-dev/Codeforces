#include <bits/stdc++.h>
using namespace std;

int moves(vector<int> &arr,int n){
    int minimum = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] < 0) minimum = min(minimum,-arr[i]);
        else minimum = min(minimum,arr[i]);
    }
    return minimum;
}

int main(){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n ; i++) cin >> arr[i];
        cout << moves(arr,n) ;
}