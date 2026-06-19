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
        vi a(n), b(n);
        f(i, n) cin >> a[i];
        f(i, n) cin >> b[i];
        unordered_map<int, int> mpp1; // for tracking a
        unordered_map<int, int> mpp2; // for tracking b
        int curr = 0;
        int candidate = a[0];
        f(i, n)
        {
            if (a[i] == candidate)
                curr++;
            else
            {
                candidate = a[i];
                curr = 1;
            }
            if (mpp1.find(candidate) != mpp1.end())
            {
                if (curr > mpp1[candidate])
                {
                    mpp1[candidate] = curr;
                }
            }
            else
                mpp1[candidate] = 1;
        }
        curr = 0;
        candidate = b[0];
        f(i, n)
        {
            if (b[i] == candidate)
                curr++;
            else
            {
                candidate = b[i];
                curr = 1;
            }
            if (mpp2.find(candidate) != mpp2.end())
            {
                if (curr > mpp2[candidate])
                {
                    mpp2[candidate] = curr;
                }
            }
            else
                mpp2[candidate] = 1;
        }
        int maxi = 1;
        for (auto it : mpp1)
        {
            curr = it.second;
            if (mpp2.find(it.first) != mpp2.end())
                curr += mpp2[it.first];
            maxi = max(curr, maxi);
        }
        for (auto it : mpp2)
        {
            curr = it.second;
            if (mpp1.find(it.first) != mpp1.end())
                curr += mpp1[it.first];
            maxi = max(curr, maxi);
        }
        cout << maxi << nl;
    }
    return 0;
}