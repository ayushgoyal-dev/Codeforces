#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int, int>;
using vpii = vector<pair<int, int>>;
using vpll = vector<pair<long long, long long>>;

#define f(i, n) for (int i = 0; i < (n); i++)
#define fr(i, n) for (int i = (n - 1); i >= 0; i--)
#define all(x) (x).begin(), (x).end()
#define nl '\n'

int moves(ll a, ll b)
{
    int count = 0;
    while (a > 0)
    {
        a = a / b;
        count++;
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        ll a, b;
        cin >> a >> b;
        int count = 0;
        if (b == 1)
        {
            b++;
            count++;
        }
        int cur = moves(a, b);
        while (cur > 1)
        {
            int nxt = moves(a, b + 1);
            if (nxt >= cur)
                break;
            b++;
            count++;
            cur = nxt;
        }
        cout << cur + count << nl;
    }

    return 0;
}