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
        int n,k;
        cin >> n >> k;
        int z = n*k;
        vll a(z);
        f(i,z) cin >> a[i];
        ll sum = 0LL;
        // last index from right 
        int right = n - (n+1)/2 ;
        int index = z-1-right;
        f(count,k){sum += a[index]; index -= (right+1);}
        cout << sum << nl;

    }
    return 0;
}