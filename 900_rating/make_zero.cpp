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
        vi a(n);
        f(i,n) cin >> a[i];
        // checking if all elements are zero 
        bool zero = true;
        f(i,n) if(a[i] != 0){zero = false;break;}
        if(zero == true) {cout << 0 << nl;continue;}
        int XOR = 0;
        f(i,n) XOR ^= a[i];
        // cheking if done in one move
        if(XOR == 0) {cout << 1 << nl;cout << 1 << " " << n << nl;continue;}
        //checking if done in two moves
        if(n%2 == 0) {cout << 2 << nl; cout << 1 << " " << n << nl;cout << 1 << " " << n << nl;continue;}
        else{
            cout << 4 << nl;
            cout << 1 << " " << n << nl;
            cout << 2 << " " << n << nl;
            cout << 1 << " " << 2 << nl;
            cout << 1 << " " << 2 << nl;
        }
        
    }

    return 0;
}