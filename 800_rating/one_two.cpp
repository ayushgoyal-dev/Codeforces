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
        int n;
         cin >> n;
         vi a(n);
         f(i,n) cin >> a[i];
         int twos = 0;
         f(i,n) if(a[i]==2) twos++;
         if(twos%2 == 1) {cout << -1 << nl; continue;}
         int count = 0;
         int index = 1;
         f(i,n){if(a[i] == 2) count++;if(count == twos/2){index = i;break;};}
         cout << index+1 << nl;
    }

    return 0;
}