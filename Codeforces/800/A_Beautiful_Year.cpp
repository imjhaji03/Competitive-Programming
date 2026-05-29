#include <bits/stdc++.h>
using namespace std;

bool check_beautifulyear(int n){
    bool flag = false;

    unordered_map<int, int> mpp;
    string s = to_string(n);
    for(int i = 0; i < s.size(); i++){
        mpp[s[i]]++;
    }
    for(auto it : mpp){
        if(it.second > 1){
            flag = true;
            break;
        }
    }
    if(flag){
        return false;
    }
    else{
        return true;
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin>>t;

    for(int i = t+1; ; i++){
        if(check_beautifulyear(i)){
            cout<<i<<'\n';
            break;
        }
    }


    return 0;
}