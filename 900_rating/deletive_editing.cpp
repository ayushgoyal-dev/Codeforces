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
        string s,t;
        cin >> s >> t;
        int n = s.size();
        int m = t.size();
        unordered_map <char,int> mpp;
        f(i,m) mpp[t[i]]++;
        fr(i,n){
            if(mpp[s[i]]> 0 && mpp.find(s[i])!= mpp.end() ) mpp[s[i]]--;
            else s[i] = '.';
        }
        string final = {};
        f(i,n) if(s[i] != '.') final += s[i];
        if(final == t) cout << "YES" << nl;
        else cout << "NO" << nl;
    }

    return 0;
}