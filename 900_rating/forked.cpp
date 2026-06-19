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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int a,b;
        cin >> a >> b;
        int xk,yk;
        cin >> xk >> yk;
        int xq,yq;
        cin >> xq >> yq;
    vpii k;
    vpii q;
    k.push_back({xk+a,yk+b});
    q.push_back({xq+a,yq+b});
    k.push_back({xk+a,yk-b});
    q.push_back({xq+a,yq-b});
    k.push_back({xk-a,yk+b});
    q.push_back({xq-a,yq+b});
    k.push_back({xk-a,yk-b});
    q.push_back({xq-a,yq-b});
    k.push_back({xk+b,yk+a});
    q.push_back({xq+b,yq+a});
    k.push_back({xk-b,yk+a});
    q.push_back({xq-b,yq+a});
    k.push_back({xk+b,yk-a});
    q.push_back({xq+b,yq-a});
    k.push_back({xk-b,yk-a});
    q.push_back({xq-b,yq-a});
    sort(all(k));
    sort(all(q));
    int n = k.size();
    vpii k1  = {{k[0].first,k[0].second}};
    vpii q1 = {{q[0].first,q[0].second}};
    for(int i = 1; i< n ; i++){
        if(k[i] != k[i-1]) k1.push_back(k[i]);
        if(q[i] != q[i-1]) q1.push_back(q[i]);
    }
    vpii ans;
    for(int i = 0 ; i < k1.size() ; i++) for(int j = 0; j < q1.size();j++) if(k1[i] == q1[j]) ans.push_back(k1[i]);
    cout << ans.size() << nl;
    }

    return 0;
}