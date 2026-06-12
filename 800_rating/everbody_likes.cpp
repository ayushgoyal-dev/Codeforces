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
        vector<long long> a(n);
        f(i,n) cin >> a[i];
        if(n == 1) {cout << 0 << nl; continue;}
        int i = 1;
        int moves = 0;
        while(i <n ){
            if((2*a[i]+(a[i-1]-a[i]))%2 == 1) {i++;continue;}
            a[i]= a[i]%2 +2;
            moves++;
            i++;
        }
        cout << moves << nl;
    }

    return 0;
}