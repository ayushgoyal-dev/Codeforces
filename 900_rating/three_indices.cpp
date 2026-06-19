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
        int n;
        cin >> n;
        vi p(n);
        f(i,n) cin >> p[i];
        bool flag = true;
        for(int i = 1; i < n-1 ; i++) if(p[i] > p[i-1] && p[i] > p[i+1]) {cout << "YES" << nl << i << " " << i+1 << " " << i+2 << nl;flag = false;break;}
        if(flag) cout << "NO" << nl;
    }

    return 0;
}