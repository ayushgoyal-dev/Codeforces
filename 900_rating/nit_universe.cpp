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
        vll a(n);
        f(i,n) cin >> a[i];
        bool elements = false;
        int count = 0;
        for(int i = 0 ; i < n;i++){
           if(a[i] != 0LL) elements = true;
          else if(elements == true && a[i] == 0LL) {count++;elements = false;if(count > 2 )break;}
        }
        if(elements == true) count++;
        cout << min(count,2) << nl;

    }

    return 0;
}