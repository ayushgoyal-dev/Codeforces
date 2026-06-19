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
        ll n, k, b, s;
        cin >> n >> k >> b >> s;
        if ((s < b * k) || (s > b * k + (k - 1) * n))
        {
            cout << -1 << nl;
            continue;
        }
        cout << min(s,b*k + k-1) << " ";
        n--;
        ll remaining = s-min(s,b*k+k-1);
        while (n--)
        {
            if(remaining >= k){
                cout << k-1 << " ";
                remaining -= (k-1);
            }
               else if (remaining > 0 && remaining < k)
        {
            cout << remaining << " ";
            remaining = 0;
        }
        else
            cout << 0 << " ";
        }
        cout << nl;
    }

    return 0;
}