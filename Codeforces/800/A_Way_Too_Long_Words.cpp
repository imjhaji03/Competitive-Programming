#include <bits/stdc++.h>
using namespace std;

string string_helper(string s){
    int n = s.size();
    string res = s[0]+to_string(n-2)+s[n-1];
    return res; 
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin>>t;

    vector<string> arr(t);


    for(int i = 0; i < t; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < t; i++){
        if((arr[i]).size() <= 10){
            arr[i] = arr[i];
        }
        else{
            arr[i] = string_helper(arr[i]);
        }
    }

    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<'\n';
    }

    
    return 0;
}