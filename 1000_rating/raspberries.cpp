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
        int n, k;
        cin >> n >> k;
        vi a(n);
        f(i, n) cin >> a[i];
        int count = INT_MAX;
        if (k == 4)
        {
            int even = 0;
            for (int i : a)
                if (i % 2 == 0)
                    even++;
            count = max(0, 2 - even);
        }

        for (int i : a)
        {
            if (i % k == 0)
            {
                count = 0;
                break;
            }
            else
                count = min(count, k - (i % k));
        }

        cout << count << nl;
    }

    return 0;
}