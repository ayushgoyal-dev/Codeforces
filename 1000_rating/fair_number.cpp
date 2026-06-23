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

bool fair(ll n){
ll temp = n;
while(temp > 0){
    int digit = temp%10;
    temp = temp/10;
    if(digit == 0) continue;
    if((n%digit) != 0) return false;
}
return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--) {
        ll n;
        cin >> n;
        while(!fair(n)) n++;
        cout << n << nl;
    }

    return 0;
}