#include <bits/stdc++.h>
using namespace std;

vector<int> modSequence(vector<int> &currSequence,int n){
    vector<int> sequence;
    sequence.push_back(currSequence[0]);
    if(n ==1) return sequence;
    for(int i = 1; i < n; i ++){
    if(currSequence[i] < currSequence[i-1]) sequence.push_back(currSequence[i]);
    sequence.push_back(currSequence[i]);
    }
    return sequence;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> currSequence(n);
        for(int i = 0; i < n ; i++) cin >> currSequence[i];
        vector<int> original = modSequence(currSequence,n);
        cout << original.size() << "\n";
        for(int i : original){
            cout << i << " ";
        }
        cout << "\n";
        }
}