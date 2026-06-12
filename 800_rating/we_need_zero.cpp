#include <bits/stdc++.h>
using namespace std;
#define int long long
#define f(i,n) for(int i = 0; i< n ; i++)
#define Its ios::sync_with_stdio(false);
#define AG cin.tie(nullptr);
#define here cout.tie(nullptr);

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n ;
         cin >> n;
         vector <int> arr(n);
         f(i,n) cin >> arr[i];
         int XOR = 0;
         f(i,n) XOR ^= arr[i];
         if(XOR == 0 && n%2 == 0) cout << 1 << "\n";
         else if(XOR == 0 && n%2 == 1) cout << 0 << "\n";
         else if(XOR != 0 && n%2 == 0) cout << -1 << "\n";
         else cout << XOR << "\n";
            }
return 0;
}


