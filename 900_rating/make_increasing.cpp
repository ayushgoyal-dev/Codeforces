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
        int n;
        cin >> n;
        vll a(n);
        f(i, n) cin >> a[i];
        int count = 0;
        bool flag = false;
        for (int i = n - 1; i > 0; i--)
        {

            while (a[i - 1] >= a[i] && a[i - 1] > 0)
            {
                a[i - 1] /= 2;
                count++;
            }

            if (a[i - 1] >= a[i])
            {
                cout << -1 << nl;
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << count << nl;
    }

    return 0;
}