#include <bits/stdc++.h>
using namespace std;
#define int long long
#define f(i,n) for(int i = 0; i< n ; i++)
#define Its ios::sync_with_stdio(false);
#define AG cin.tie(nullptr);
#define here cout.tie(nullptr);


int moves( int a , int b , int c , int d){
    if(d < b) return -1;
    if( a == c && b ==d ) return 0;
    else if( c < a) return 2*(d-b) +(a-c);
    else if ( a + d-b < c) return -1;
    else return d-b + (a+d-b-c);
} 
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        cout << moves(a,b,c,d) << "\n";
    }
return 0;
}