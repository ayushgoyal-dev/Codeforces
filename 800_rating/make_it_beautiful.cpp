#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

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
        vi a(n);
        f(i, n) cin >> a[i];
        int count = 1;
        for (int i = 1; i < n; i++)
            if (a[i] == a[i - 1])
                count++;
        if (count == n)
        {
            cout << "NO" << nl;
            continue;
        }
        else
        {
            sort(all(a));
            reverse(all(a));
            if (a[1] == a[0])
                swap(a[1], a[n - 1]);
            cout << "YES" << nl;
            for (int i : a)
                cout << i << " ";
            cout << nl;
        }
    }

    return 0;
}