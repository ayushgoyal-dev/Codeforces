#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int, int>;
using vpii = vector<pair<int, int>>;

#define f(i, n) for (int i = 0; i < (n); i++)
#define fr(i, n) for (int i = (n - 1); i >= 0; i--)
#define all(x) (x).begin(), (x).end()
#define nl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        ll n, m, i, j;
        cin >> n >> m >> i >> j;
        // Distance is maximised when the yoyos are placed at end points of diagonal
        // no matter the starting point the distance to travel to/from the digonal from/to startig point is same 
        cout << n << " " << 1 << " " << 1 << " " << m << nl;
    }
    return 0;
}