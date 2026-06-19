#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int, int>;
using vpii = vector<pair<int,int>>;

#define f(i,n) for(int i = 0; i < (n); i++)
#define fr(i,n) for(int i = (n-1); i >= 0; i--)
#define all(x) (x).begin(), (x).end()
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;
        string temp = s;
        int n = s.size();
        int zero = 0;
        int one = 0;
        int cost = 0;
        f(i,n) {if(s[i] == '1') one++;else zero++;}
        int i = n-1;
        while(i>=0){
        if(zero == one) break;
        else if(zero < one && s[i] == '0') i--;
        else if(zero < one && s[i] == '1') {one--;cost++;}
        else if(one < zero && s[i] == '0') {zero--;cost++;}
        i--;
        }
        
    }


    return 0;
}