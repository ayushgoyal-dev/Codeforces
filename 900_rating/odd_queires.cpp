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
        int n, q;
        cin >> n >> q;
        vll a(n);
        f(i, n) cin >> a[i];
        vll prefix_sum(n);
        prefix_sum[0] = a[0];
        for (int i = 1; i < n; i++)
            prefix_sum[i] = a[i] + prefix_sum[i - 1];
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll diff = prefix_sum[r - 1] - prefix_sum[l - 1] + a[l - 1];
            if ((prefix_sum[n - 1] - diff + (k * (r - l + 1LL))) % 2 == 1)
                cout << "YES" << nl;
            else
                cout << "NO" << nl;
        }
    }

    return 0;
}