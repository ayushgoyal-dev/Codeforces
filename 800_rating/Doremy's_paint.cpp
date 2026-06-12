#include <bits/stdc++.h>
using namespace std;

bool good_array(vector<int> &arr,int n){
    unordered_map<int,int> hashmap;
    for(int i = 0 ; i < n;i++) hashmap[arr[i]]++;
    int m = hashmap.size();
if(m==1 && hashmap[arr[0]] == n) return true;
else if(m == 2){
    int diff = 0;
    for(auto it : hashmap){
    if(diff == 0) diff = it.second;
    else diff -= it.second;
    }
    if(diff == 1 || diff == -1 || diff == 0) return true;
    else return false;
} 
else return false;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n ; i++) cin >>arr[i];
if(good_array(arr,n)) cout << "YES\n";
else cout << "NO\n";
    }
}