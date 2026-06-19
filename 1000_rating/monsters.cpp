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
        vpii v;
        f(i,n) v.push_back({a[i]/k + a[i]%k,i});
        sort(all(v));
        for(auto it:v) cout << it.second +1 << " ";
        cout << nl;

    }

    return 0;
}