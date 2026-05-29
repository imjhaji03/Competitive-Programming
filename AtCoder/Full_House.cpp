#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    vector<int> arr(5);
    unordered_map<int, int> mpp;

    bool has2 = false;
    bool has3 = false;
    for(int i = 0; i < 5; i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }

    for(auto it : mpp){
        if(it.second == 2){
            has2 = true;
        }
        if(it.second == 3){
            has3 = true;
        }
    }

    if(has2 && has3){
        cout<<"Yes"<<'\n';
    }
    else{
        cout<<"No"<<'\n';
    }


    return 0;
}