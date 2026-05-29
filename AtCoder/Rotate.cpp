#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin>>t;
    vector<vector<int>> arr(t, vector<int>(t));

    for(int row = 0; row < t; row++){
        string s;
        cin>>s;
        for(int col = 0; col < t; col++){
            arr[row][col] = s[col] - '0';
        }
    }

    int temp = arr[0][0];

    for(int row = 0; row < t-1; row++){
        arr[row][0] = arr[row+1][0];
    }

    for(int col = 0; col < t-1; col++){
        arr[t-1][col] = arr[t-1][col+1];
    }

    for(int row = t-1; row > 0; row--){
        arr[row][t-1] = arr[row-1][t-1];
    }

    for(int col = t-1; col > 1; col--){
        arr[0][col] = arr[0][col-1];
    }

    arr[0][1] = temp;
    
    for(int row = 0; row < t; row++){
        for(int col = 0; col < t; col++){
            cout<<arr[row][col];
        }
        cout<<'\n';
    }
    

    return 0;
}