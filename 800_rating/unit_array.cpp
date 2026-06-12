#include <bits/stdc++.h>
using namespace std;

int moves(vector<int> arr, int n){
    int sum = 0 ;
    int product = 1;
for(int i = 0 ; i < n ; i++){sum += arr[i];product *= arr[i];}
if(sum >= 0 && product == 1) return 0;
else if(sum >= 0 && product == -1) return 1;
else if(product == 1 && sum < 0) {
    if(((-sum+1)/2)%2 == 0) return (-sum+1)/2;
    else return (-sum+1)/2 + 1;
}
else{
if(((-sum+1)/2)%2 == 0) return (-sum+1)/2 +1 ;
else return (-sum+1)/2;
} 
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> arr(n);
        for(int i = 0; i<n;i++) cin >> arr[i];
    cout << moves(arr,n) << "\n";
    }
}