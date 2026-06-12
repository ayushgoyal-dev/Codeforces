#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> eff(n-1);
        for(int i = 0; i < n-1 ; i++) cin >> eff[i];
        int sum = 0;
        for(int i : eff) sum += i;
        cout << 0-sum << "\n";
    }
}