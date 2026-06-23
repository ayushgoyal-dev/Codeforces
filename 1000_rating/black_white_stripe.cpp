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
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int freq = 0; // frequency of white
        int low = 0;
        int high = 0;
        int mn = k;
        while(high < n){
            if(s[high] == 'W') freq++;
            if(high - low + 1 == k) {mn = min(mn,freq);if(s[low] == 'W') freq--;low++;}
            high++;
        }
        cout << mn << nl;
    }

    return 0;
}