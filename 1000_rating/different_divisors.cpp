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
#define nl '\n'

bool is_prime(int a){
    for(int i = 2; i <= a/i ; i++) if(a%i == 0) return false;
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--) {
        int d;
        cin >> d;
        int ans = 1;
        int i = ans + d;
        while(!is_prime(i)) i++;
        ans *= i;
        i += d;
        while(!is_prime(i)) i++;
        ans *= i;
        cout << ans << nl;
    }

    return 0;
}