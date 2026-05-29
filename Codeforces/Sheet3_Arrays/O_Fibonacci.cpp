#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<long long> arr(t+1);
    arr[1] = 0;
    arr[2] = 1;
    for(int i = 3; i <= t; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    cout<<arr[t]<<endl;

    return 0;
}