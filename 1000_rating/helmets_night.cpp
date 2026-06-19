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
        int n, p;
        cin >> n >> p;
        vi a(n);
        f(i, n) cin >> a[i];
        vi b(n);
        f(i, n) cin >> b[i];
        // vector to store b[i] and a[i]
        vpii v;
        f(i, n) v.push_back({b[i], a[i]});
        // setting the priority order
        sort(all(v));
        // reversing the elements with same first element 
        int low = 0;
        int high = 0;
        f(i, n)
        {
            if (v[low].first == v[i].first)
                high = i;
            else
            {
                reverse(v.begin() + low, v.begin() + high + 1);
                low = i;
                high = i;
            }
        }
        reverse(v.begin() + low, v.begin() + high + 1);
        // caluculating cost
        int residents = v[0].second;
        int helmet = v[0].first*min(v[0].second,n-1);
        int i = 1;
        
        // while (v[i].first <= p && residents < n)
        // {
        //     if (v[i].second <= n - residents - 1)
        //     {
        //         residents += v[i].second + 1;
        //         helmet += v[i].second * v[i].first + p;
        //     }
        //     else
        //     {
        //         helmet += v[i].first * (n - residents - 1) + p;
        //         residents = n;
        //     }
        //     i++;
        // }
        while(v[i].first <= p && residents < n){
           
        }
        
        cout << helmet+p << nl;
    }

    return 0;
}