#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int, int>;
using vpii = vector<pair<int,int>>;
using vpll = vector<pair<long long,long long>>;

#define f(i,n) for(int i = 0; i < (n); i++)
#define fr(i,n) for(int i = (n-1); i >= 0; i--)
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
        int n;
        cin >> n;

        ll sumSecond = 0;
        ll minFirst = LLONG_MAX;
        ll minSecond = LLONG_MAX;

        while (n--)
        {
            int m;
            cin >> m;

            ll first = LLONG_MAX;
            ll second = LLONG_MAX;

            for (int i = 0; i < m; i++)
            {
                ll x;
                cin >> x;

                if (x < first)
                {
                    second = first;
                    first = x;
                }
                else if (x < second)
                {
                    second = x;
                }
            }

            sumSecond += second;
            minFirst = min(minFirst, first);
            minSecond = min(minSecond, second);
        }

        cout << sumSecond - minSecond + minFirst << '\n';
    }

    return 0;
}