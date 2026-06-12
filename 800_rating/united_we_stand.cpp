#include <bits/stdc++.h>
using namespace std;


 void solve(vector<int> &a , int n ,vector<int> &b, vector<int> &c){
    sort(a.begin(),a.end());
    b.push_back(a[0]);
    for(int i = 1 ; i < n ; i++){
        if(a[i] == a[i-1]) b.push_back(a[i]);
        else break; 
    }
    for(int i = b.size(); i < n ; i++) c.push_back(a[i]);
    return;
 }



int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        vector<int> b;
        vector<int> c;
        solve(a,n,b,c);
        if(c.size()==0) cout << -1 << "\n";
        else{
            cout << b.size() << " " << c.size() << "\n";
            for(int i : b) cout << i << " ";
            cout << "\n";
            for(int i : c) cout << i << " ";
            cout << "\n";
        }

    }
}