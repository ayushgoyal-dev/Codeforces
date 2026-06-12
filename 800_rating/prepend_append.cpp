#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

#define f(i,n) for(int i = 0; i < (n); i++)
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
        int low = 0;
        int high = n-1;
        int length = n;
        while(low < high) {
            if((s[low] == '1' && s[high] == '0') || (s[low] == '0' && s[high] == '1')) length -= 2; 
            else break;
            low++;
            high--;
        }
        cout << length << nl;
    }

    return 0;
}