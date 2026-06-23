#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int, int>;
using vpii = vector<pair<int,int>>;

#define f(i,n) for(int i = 0; i < (n); i++)
#define fr(i,n) for(int i = (n-1); i >= 0; i--)
#define all(x) (x).begin(), (x).end()
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
    int n;
    cin >> n;
    int power = floor(log2(n-1)); // calculating maximum power of 2 less than n-1
    int j = (1 << power); // the moinimum cost
  for(int i = j-1; i >= 0 ; i--) cout << i << " ";
  for(int i = j; i < n ; i++) cout << i << " ";
 cout << nl;
    }
    return 0;
}