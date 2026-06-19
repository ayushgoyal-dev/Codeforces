#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        if (n % 2 == 1 || n < 4) {
            cout << -1 << '\n';
            continue;
        }

        long long mn = -1, mx = -1;

        // ---- MAX buses (use as many 4-wheel as possible) ----
        if (n % 4 == 0) {
            mx = n / 4;
        } else if (n >= 6) {
            mx = (n - 6) / 4 + 1;
        }

        // ---- MIN buses (use as many 6-wheel as possible) ----
        if (n % 6 == 0) {
            mn = n / 6;
        } else if (n >= 8 && (n - 8) % 6 == 0) {
            mn = (n - 8) / 6 + 2;
        } else if (n >= 4 && (n - 4) % 6 == 0) {
            mn = (n - 4) / 6 + 1;
        }

        cout << mn << " " << mx << '\n';
    }

    return 0;
}