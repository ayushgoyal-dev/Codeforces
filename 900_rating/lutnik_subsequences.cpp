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
        int n ;
        cin >> n;
        vll a(n);
        f(i,n) cin >> a[i];
        int one = 0;
        int zero = 0;
        f(i,n){
         if(a[i] == 1LL) one++;
         else if(a[i] == 0LL) zero++;
        }
        cout <<  one*(1LL << zero) << nl;
}

    return 0;
}