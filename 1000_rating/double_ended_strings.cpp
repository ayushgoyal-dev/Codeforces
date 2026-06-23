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

    int t;
    cin >> t;

    while(t--) {
        string a,b;
        cin >> a >> b;
        if(a.size() < b.size()) swap(a,b);
        int m = a.size();
        int n = b.size();
        int length = 0;
        for(int i = 0 ; i < n ; i++){
            string test = {};
            for(int j = i ; j < n ; j++){
            test += b[j];
            if(a.find(test) != string::npos)if(test.size()> length) length = test.size();
        }
    }
    cout << m + n - (2*length)<< nl;
}
return 0;
}