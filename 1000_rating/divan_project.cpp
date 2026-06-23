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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vll a(n);
        f(i, n) cin >> a[i];
        vpll v;
        f(i, n) v.push_back({a[i], i + 1});
        sort(all(v));
        reverse(all(v));
        int k = 1;
        vll ans(n + 1, 0);
        bool flag1 = false;
        bool flag2 = false;
        ll time = 0;
        for (int i = 0; i < n; i++)
        {
            if (!flag1 && !flag2)
            {
                ans[v[i].second] = ans[0] + k;
                flag1 = true;
                time += 2 * k * v[i].first;
            }
            else if (flag1 && !flag2)
            {
                ans[v[i].second] = ans[0] - k;
                flag2 = true;
                time += 2 * k * v[i].first;
            }
            else if (flag1 && flag2)
            {
                k++;
                flag1 = false;
                flag2 = false;
                i--;
            }
        }
        cout << time << nl;
        for (int i : ans)
            cout << i << " ";
        cout << nl;
    }

    return 0;
}