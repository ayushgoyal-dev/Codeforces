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
        string s;
        cin >> s;
  
        int curr = 0;
        int maximum = INT_MIN;
        f(i, n)
        {
            if (s[i] == '<')
                curr++;
            else
                curr = 0;
            maximum = max(maximum, curr);
        }
        curr = 0;
        f(i, n)
        {
            if (s[i] == '>')
                curr++;
            else
                curr = 0;
            maximum = max(maximum, curr);
        }
        cout << maximum + 1 << nl;
    }
    return 0;
}