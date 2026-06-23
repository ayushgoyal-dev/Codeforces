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
        vi s(n);
        f(i,n) cin >> s[i];
        int count = 1;
        int candidate = s[0];
        vi ans(n);
        ans[0] = 1;
        bool flag = true;
        for(int i = 1; i < n ; i++){
            ans[i] = i+1;
        if(s[i] == candidate) {count++;swap(ans[i],ans[i-1]);}
        else if(count == 1) {flag = false;break;}
        else {count = 1; candidate = s[i];}
    }
    if(count == 1 || !flag) {cout << -1 << nl;continue;}
    for(int i : ans) cout << i << " ";
    cout << nl;
}
    return 0;
}