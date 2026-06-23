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
#define rall(x) (x).rbegin(), (x).rend()
#define nl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int ones = 0;
        int zeros = 0;
        int length = 0;
        for (char c : s)
        {
            if (c == '1')
                ones++;
            else
                zeros++;
        }
        f(i, n)
        {
            if (s[i] == '1' && zeros > 0)
            {
                zeros--;
                length++;
            }
            else if(s[i] == '0' && ones > 0)
            {
                ones--;
                length++;
            }
            else break;
        }
        cout << n-length << nl;
    }
        return 0;
    }