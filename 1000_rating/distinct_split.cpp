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
    string s;
    cin >> s;
    unordered_map<char,int> mpp;
    f(i,n) mpp[s[i]]++;
    int m = mpp.size();
    int maxi = 2;
    unordered_map <char,int> mmp;
    f(i,n){
    mpp[s[i]]--;
    mmp[s[i]]++;
    if(mpp[s[i]] == 0)mpp.erase(s[i]);
    int a = mpp.size();
    int b = mmp.size();
    maxi = max(a+b,maxi);
    }
    cout << maxi << nl;
    }

    return 0;
}