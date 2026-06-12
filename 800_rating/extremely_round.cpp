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
        int n ;
        cin >> n;
        int count = -1;
        int digit;
        while(n > 0) {
        digit = n%10;
        count ++;
        n /= 10;
        }
        cout << digit +(9*count) << nl;
    }

    return 0;
}