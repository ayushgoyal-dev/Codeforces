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

   
        int n,d;
        cin >> n >> d;  
        vi p(n);
        f(i,n) cin >> p[i];
        int used = 0;
        int wins = 0;
        int index = n-1;
        sort(all(p));
        while(used < n){
        if(d/p[index]+ 1 <= n-used){wins++; used += d/p[index] +1;}
        else break;
        index--;
        }
        cout << wins << nl;

    return 0;
}