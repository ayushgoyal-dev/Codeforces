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
    ll w,h;
    cin >> w >> h;
    int l = 2;
    ll area = 0;
    while(l--){
    ll k;
    cin >> k;
    vll a(k);
    f(i,k) cin >> a[i];
    area = max(area,(a[k-1]-a[0])*h);    
    }
    l = 2;
    while(l--){
    ll z;
    cin >> z;
    vll b(z);
    f(i,z) cin >> b[i];
    area = max(area,(b[z-1]-b[0])*w);
    }
    cout << area << nl;
    }

    return 0;
}