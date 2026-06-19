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
        int  n,x;
        cin >> n >> x;
        vi a(n);
        f(i,n) cin >> a[i];
        ll mini = (accumulate(all(a),0LL) + x - 1)/x;
        ll maxi = 0LL;
        f(i,n) maxi += (a[i]+x-1)/x;
        cout << mini << " " << maxi << nl;
        
    }

    return 0;
}