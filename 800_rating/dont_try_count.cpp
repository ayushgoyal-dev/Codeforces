#include <bits/stdc++.h>
using namespace std;

// double until you find substring  or you reach 5 moves if not found return -1
 int moves(string x, string s , int n ,int m){
    string doubled = x;
    int index;
    int move = 0;
    while(move <5){
    if(doubled.find(s) != string::npos) return move;
         doubled = doubled + doubled;
         move++;
    }
    if(doubled.find(s) == string::npos) return -1;
    else return move;    
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        string x,s;
        cin >> x >> s;
        int move = moves(x,s,n,m);
        cout << move << "\n";
    }
}

