#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    int dist = INT_MAX;
    int res = n;
    vector<int> arr;

    for(int i = 0; i <= 100; i++){
        if(i % 5 == 0){
            arr.push_back(i);
        }
    }

    for(int i = 0; i < arr.size(); i++){
        int curr_dist = abs(arr[i]-n);
        if(curr_dist < dist){
            dist = curr_dist;
            res = arr[i];
        }
    }
    

    cout<<res<<'\n';

    return 0;
}