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
        int n, r, b;
        cin >> n >> r >> b;
        int size = r / (b + 1);
        int remaining = r %(b+1);
        string final = {};
        int curr = 0;
        string s(size,'R');
        while (r > 0)
        {
         final += s;
          r = r - size;
          if(remaining) {final += "R" ;remaining--;r--;}
          if(b) {final += "B";b--;}
        }
        cout << final << nl;
    }
    return 0;
}