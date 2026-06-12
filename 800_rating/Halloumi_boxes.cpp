#include <bits/stdc++.h>
using namespace std;

string IsPossible(vector<int> arr, int k,int n){
        if(k==1)for(int i = 1; i<n ;i++) if(arr[i-1] > arr[i]) return "NO";
        return "YES";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector <int> arr;
        for(int i = 0 ; i < n; i++){
            int x;
            cin >> x;
            arr.push_back(x);
        }
        cout << IsPossible(arr,k,n) << " \n";
    }
}