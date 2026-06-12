#include <bits/stdc++.h>
using namespace std;

// my own spiral approach
int score (vector<vector<char>> &target){
    int s = 0;
    int row_start = 0;
    int column_start = 0;
    while(row_start < 5){
     int i = row_start;
     int j = column_start;
     bool goingright = true;
     bool goingdown = false;
     bool goingleft = false;
     bool goingup = false;
     while(i < 10-row_start && i >= row_start && j < 10-column_start && j >= column_start){
        if(target[i][j] == 'X') s += row_start +1;
     if(goingright) j++;
     if(j == 10 -column_start){goingright = false;goingdown = true;j--;}
     if(goingdown) i++;
     if(i == 10-row_start) {goingdown = false;goingleft = true;i--;}
     if(goingleft) j--;
     if(j == column_start -1){goingleft = false;goingup = true;j++;}
     if(goingup) i--;
     if(i == row_start && goingup == true) break; 
     }
    row_start++;
    column_start++;
    }
    return s;
}

// cleaner spiral approach 
int score(const vector<vector<char>>& a){
    int ans = 0;

    for(int layer = 0; layer < 5; layer++){
        int top = layer;
        int bottom = 9 - layer;
        int left = layer;
        int right = 9 - layer;

        for(int j = left; j <= right; j++)
            if(a[top][j] == 'X') ans += layer + 1;

        for(int i = top + 1; i <= bottom; i++)
            if(a[i][right] == 'X') ans += layer + 1;

        for(int j = right - 1; j >= left; j--)
            if(a[bottom][j] == 'X') ans += layer + 1;

        for(int i = bottom - 1; i > top; i--)
            if(a[i][left] == 'X') ans += layer + 1;
    }

    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<vector<char>> target(10,vector<char>(10,'.'));
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10 ; j++) cin >> target[i][j];
        }
     cout << score(target) << "\n";
    
    }
}