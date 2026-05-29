#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<int> arr(t);
    for(int i = 0; i < t; i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    bool flag = false;
    for(int i = 0; i < t; i++){
        if(arr[i] == x){
            cout<<i<<endl;
            flag = true;
            break;
        }
    }

    if(!flag){
        cout<<"-1"<<endl;
    }
    return 0;
}