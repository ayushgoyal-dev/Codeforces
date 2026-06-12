#include <bits/stdc++.h>
using namespace std;

// This approach simulates the entire process and then checks TC = O(n^2) SC = O(n)
// bool is_possible(vector<int> &arr, int n){
//     vector<int> temp = arr;
//     sort(temp.begin(),temp.end());
//     bool swapped = true;
//     while(swapped){
//         swapped = false;
//   for(int i =1 ; i < n-1 ; i++) if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) {swap(arr[i],arr[i+1]);swapped = true;}
//     }
//   if(temp == arr) return true;
//   else return false;
// }

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> arr(n);
        for(int i = 0 ; i < n ; i++) cin >> arr[i];
    // if(is_possible(arr,n)) cout << "YES\n";
   //  else cout << "NO\n";
   if(arr[0] == 1 ) cout << "YES\n";
   else cout << "NO\n";
    }
}