#include <bits/stdc++.h>
using namespace std;

int max_distance(vector<int> &arr,int n ,int x){
int maximum = INT_MIN;
// max of distance between of all stations
if(n > 1) for(int i = 1; i < n ; i++) maximum = max(maximum, arr[i] - arr[i-1]);
// case of travelling to and from start and stop points
maximum = max(maximum, max(arr[0],2*(x-arr[n-1])));
return maximum;
}

int main(){
int t;
cin >> t;
while(t--){
    int n,x;
    cin >> n >> x;
    vector<int> arr;
    for(int i = 0 ; i < n ;  i++){
        int z;
        cin >> z;
        arr.push_back(z);
    }
 cout << max_distance(arr,n,x) << "\n";
}
}