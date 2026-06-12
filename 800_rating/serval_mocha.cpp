#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

#define f(i,n) for(int i = 0; i < (n); i++)
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
        vi a(n);
        f(i,n) cin >> a[i];
        int gcd = __gcd(a[0],a[1]);
        f(i,n) gcd = __gcd(a[i],gcd);
        if(gcd > 2) {cout << "NO" << nl;continue;}
        int minimum = INT_MAX;
        f(i,n){ f(j,n) minimum = min(minimum, __gcd(a[i],a[j]));}
        if(minimum > 2) cout << "NO" << nl;
        else cout << "YES" << nl; 
    }

    return 0;
}