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
        int n,m;
        cin >> n >> m;
        int sum = 0;
        int negative = 0;
        int mini = INT_MAX;
        while(n--){
            vi a(m);
            f(i,m){
                cin >> a[i];
                if(a[i] < 0) negative++;
                mini = min(mini,abs(a[i]));
                sum += abs(a[i]);
            }
        }
        if((negative %2) == 1) sum -= 2*mini; 
        cout << sum << nl;
    }

    return 0;
}