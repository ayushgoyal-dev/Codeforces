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
        char c;
        string s;
        cin >> n >> c;
        cin >> s;
        if (c == 'g')
        {
            cout << 0 << nl;
            continue;
        }
        bool flag = true; // c not found
        int index = 0;
        int time = 1;
        f(i, n)
        {
            if (flag && s[i] == c)
            {
                index = i;
                flag = false;
            }
            if (!flag && s[i] == 'g')
            {
                time = max(time, i - index);
                flag = true;
            }
        }

        if (!flag)
        {
            int z = s.find('g'); // first occurence of g
            time = max(time, z + n - index);
        }
        cout << time << nl;
    }

    return 0;
}