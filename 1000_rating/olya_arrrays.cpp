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

bool is_prime(ll a){
    if(a == 1LL) return false;
    for(ll i = 2; i<=a/i; i++) if(a%i==0) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        ll a,b;
        cin >> a >> b;
        ll gcd = __gcd(a,b);
        ll result;
        if(gcd == a ) result = (b*b)/gcd;
        else result = (a*b)/gcd;
        cout << result << nl;
    }

    return 0;
}