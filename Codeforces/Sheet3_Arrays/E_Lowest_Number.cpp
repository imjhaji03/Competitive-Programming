#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<int> arr(t);
    for(int i = 0; i < t; i++){
        cin>>arr[i];
    }
    int lowest = INT_MAX;
    int idx = 0;
    for(int i = 0; i < t; i++){
        if(arr[i] < lowest){
            lowest = arr[i];
            idx = i;
        }
    }

    cout<<lowest<<" "<<idx+1<<endl;

    return 0;
}