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
        ll n;
        cin >> n;
        int two = 0;
        int three = 0;
        while(n%3LL == 0LL){n= n/3;three++;}
        while(n%2LL == 0LL){n= n/2;two++;}
        if(n != 1LL || three < two) cout << -1 << nl;
        else cout << 2*three-two << nl;
    }

    return 0;
}