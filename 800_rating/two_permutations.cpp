#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

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
        int n,a,b;
        cin >> n >> a >> b;
         if((n==a) && (n == b)) cout << "YES" << nl;
         else if(a+b < n-1) cout << "YES" << nl;
         else cout << "NO" << nl;
    }

    return 0;
}