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
        int n;
        cin >> n;
        vector <int> p(n);
        f(i,n) cin >> p[i];
        int distance;
        int gcd = abs(p[0]-1);
        f(i,n) {distance = abs(p[i] - i -1);gcd = __gcd(gcd,distance);}
      
        cout << gcd << nl;
    }

    return 0;
}