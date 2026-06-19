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
        ll a, b, c;
        cin >> a >> b >> c;
        if (((a+c)%2 == 0)&&(b == (a + c) / 2))
            cout << "YES" << nl;
        else if ((b < (a + c) / 2) && ((a + c) % (2 * b) == 0LL))
            cout << "YES" << nl;
        else if ((b > (a + c) / 2) && (((2 * b - c) % a == 0LL) || ((2 * b - a) % c == 0LL)))
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}