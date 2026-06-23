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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--) {
    ll a,b;
    cin >> a >> b;
    int count = 0;
    while(b>a){
        if(a <= b/8LL) a *= 8LL;
        else if( a <= b/4LL ) a *= 4LL;
        else a *= 2LL; 
        count++;
    }
    if(b ==a) {cout << count << nl;continue;}
    while(a > b){
        if(a%8LL == 0 && a/8LL >= b) a /= 8LL;
        else if(a%4LL == 0LL && a/4LL >= b) a/= 4LL;
        else if(a%2LL == 0LL) a /=2LL;
        else break;
        count++;
    }
    if(b ==a) {cout << count << nl;continue;}
    cout << -1 << nl;
    }

    return 0;
}