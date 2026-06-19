#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
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
        long long n,k,x;
        cin >> n >> k >> x;
        long long sum = (n*(n+1))/2; // sum of all elements
        long long LL = (k*(k+1))/2; // lower limit
        long long UL = sum - ((n-k)*(n-k+1)/2); // upper limit 
        if(x<= UL && x >= LL) cout << "YES" << nl;
        else cout << "NO" << nl;
    }

    return 0;
}