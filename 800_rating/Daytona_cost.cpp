#include <bits/stdc++.h>
using namespace std;

// A subsegment can always be of length one
bool found(vector<int> a,int k,int n){
    for(int i = 0 ; i < n ; i++) if(a[i] == k) return true;
    return false;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i =0 ; i < n; i++) cin >> a[i];
     if(found(a,k,n)) cout << "YES\n";
     else cout << "NO\n";   
    }
}