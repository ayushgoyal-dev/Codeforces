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

bool is_prime(int n){
    if(n == 1) return false;
    for(int i = 2; i <= n/i ; i++) if(n%i == 0) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
            int ans = 1;
           for(int i = 2; i <= n/i; i++) if(n%i == 0) ans = max(ans,max(i,n/i));
           cout << ans << " " << n-ans << nl;
         
     }

    return 0;
}