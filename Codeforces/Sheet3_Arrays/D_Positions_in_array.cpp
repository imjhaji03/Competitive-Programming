#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<int> arr(t);
    for(int i = 0; i < t; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < t; i++){
        if(arr[i] <= 10){
            cout<<"A"<<"["<<i<<"]"<<" = "<<arr[i]<<endl;
        }
    }

    cout<<endl;

    return 0;
}