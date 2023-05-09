#include <bits/stdc++.h> 

using namespace std;

void Solve(vector<vector<bool>>& condn, vector<vector<int>>& arr, int n,
           vector<string>& an, string ans, int i, int j) {
    if(i == n-1 && j == n-1) {
        an.push_back(ans);
        return;
    }
    if(i+1 < n && arr[i+1][j] == 1 && !condn[i+1][j]) {
        condn[i+1][j] = true;
        ans += 'D';
        Solve(condn, arr, n, an, ans, i+1, j);
        ans.pop_back();
        condn[i+1][j] = false;
    }
    if(j-1 >= 0 && arr[i][j-1] == 1 && !condn[i][j-1]) {
        condn[i][j-1] = true;
        ans += 'L';
        Solve(condn, arr, n, an, ans, i, j-1);
        ans.pop_back();
        condn[i][j-1] = false;
    }
    if(j+1 < n && arr[i][j+1] == 1 && !condn[i][j+1]) {
        condn[i][j+1] = true;
        ans += 'R';
        Solve(condn, arr, n, an, ans, i, j+1);
        ans.pop_back();
        condn[i][j+1] = false;
    }

    if(i-1 >= 0 && arr[i-1][j] == 1 && !condn[i-1][j]) {
        condn[i-1][j] = true;
        ans += 'U';
        Solve(condn, arr, n, an, ans, i-1, j);
        ans.pop_back();
        condn[i-1][j] = false;
    }
    return;
    }
vector<string> searchMaze(vector<vector<int>> &arr, int n) {
    vector<string> an;
    vector<vector<bool>> condn(n, vector<bool>(n, false));
    string ans = "";
    condn[0][0] = true;
    if(arr[0][0]==1){
        Solve(condn, arr, n, an, ans, 0, 0);
    }
    return an;
}
