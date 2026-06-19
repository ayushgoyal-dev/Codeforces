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
        sort(all(a));
        int curr = 1;
        int freq = 1;
        for(int i = 1; i< n ; i ++){
            if(a[i] == a[i-1]) curr++;
            else curr = 1;
            freq = max(freq,curr);
        }
        int count = 0;
        while(freq < n){
            count++; // create a copy 
            count += min(freq,n-freq); // swapping the elements
            freq = min(2*freq,n);
        }
        cout << count << nl;
    }

    return 0;
}