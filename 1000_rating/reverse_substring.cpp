#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int, int>;
using vpii = vector<pair<int,int>>;
using vpll = vector<pair<long long,long long>>;

#define f(i,n) for(int i = 0; i < (n); i++)
#define fr(i,n) for(int i = (n-1); i >= 0; i--)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        int n;
        cin >> n;
        string s;
        cin >> s;
        string t = s;
        sort(all(t));
        if(t == s) cout << "NO" << nl;
        else for(int i = 0 ; i < n-1 ; i++) if(s[i+1] < s[i]) {cout << "YES" << nl << i+1 << " " << i+2 << nl;break;}
    return 0;
}