#include <bits/stdc++.h>
using namespace std;

int moves(string s,int n){
int count = 0;
int current = 0;
for(char c : s){
    if(c == '.') {current++;count++;}
    else current = 0;
    if(current == 3) return 2;
}
return count;
}

int main(){
int t;
cin >> t;
while(t--){
    int n;
    cin >> n;
    string s;
    cin >> s;
cout << moves(s,n) << "\n";
}
}