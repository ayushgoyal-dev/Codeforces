#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;
using vpii = vector<pair<int,int>>;

#define f(i,n) for(int i = 0; i < (n); i++)
#define fr(i,n) for(int i = (n-1); i >= 0; i--)
#define all(x) (x).begin(), (x).end()
#define nl '\n'

bool is_palindrome(string s){
    int n = s.size();
    int low = 0;
    int high = n -1;
    while(low < high){
        if(s[low] != s[high]) return false;
        low++;
        high--;
    }
    return true;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        unordered_map<char,int> mpp;
        int count = 0;
        f(i,n) mpp[s[i]]++;
        for(auto it: mpp) if(it.second%2 == 1) count++;
        if(count > k +1) cout << "NO" << nl;
        else cout << "YES" << nl;
    } 

    return 0;
}