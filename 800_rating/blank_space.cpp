#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> binary(n);
        for(int i = 0 ; i < n ; i++) cin >> binary[i];
        int curr_length = 0;
        int max_length = 0;
        for(int i = 0 ; i < n ; i++){
            if(binary[i] == 0) curr_length++;
            else curr_length = 0;
            max_length = max(curr_length,max_length);
        }
        cout << max_length << "\n";
    }
}