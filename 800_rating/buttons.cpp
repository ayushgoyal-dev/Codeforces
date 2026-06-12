#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        int moves1 = a + (int)ceil(c/2.0);
        int moves2 = b+ (int)floor(c/2.0);
        if(moves1 > moves2) cout << "First" << "\n";
        else cout << "Second" << "\n";
    }
}