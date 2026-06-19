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
        int n,x;
        cin >> n >> x;
        vi a(n);
        f(i,n) cin >> a[i];
        int v = a[0];
        int count = 0;
        int i = 0;
        while(i < n-1){
        if(abs(a[i+1]-a[i]) <= 2*x) v = (a[i+1]+a[i])/2;
        else {count++;v = a[i+1];}
        i++;
        }
        cout << count << nl;
    }

    return 0;
}