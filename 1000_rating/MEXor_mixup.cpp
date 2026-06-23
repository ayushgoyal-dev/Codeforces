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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--) {
        int a,b;
        cin >> a >> b;
        int count = a;
        int XOR;

        // calculating XOR of first a-1 elements
        if(a==0) XOR = 0;
        else if((a-1)%4 == 0) XOR = (a-1);
        else if((a-1)%4 == 1) XOR = 1;
        else if((a-1)%4 == 2) XOR = a;
        else if((a-1)%4 == 3) XOR = 0;
        // checking the needed amount of extra elements
        if (XOR == b) cout << count << nl;
        else if((XOR^b) == a) cout << count +2 << nl;
        else cout << count +1 << nl;
    }

    return 0;
}