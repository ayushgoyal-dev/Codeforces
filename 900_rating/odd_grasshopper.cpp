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
        ll x,n;
        cin >> x >> n;
        if(x%2 == 0){
        if(n%4 == 0) cout << x << nl;
        else if(n%4 == 1) cout << x-n << nl;
        else if (n%4 == 2) cout << x+1 << nl;
        else cout << x+n+1 << nl;
            }
        else{
            if(n%4 == 0) cout << x << nl;
            else if(n%4 == 1) cout << x+n << nl;
            else if(n%4 == 2) cout << x-1 << nl;
            else cout << x-n-1 << nl;
        }
    }

    return 0;
}