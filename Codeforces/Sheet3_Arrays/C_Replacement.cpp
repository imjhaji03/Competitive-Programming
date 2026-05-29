#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<int> arr(t);
    for(int i = 0; i < t; i++){
        cin>>arr[i];
        if(arr[i] > 0){
            arr[i] = 1;
        }
        else if(arr[i] < 0){
            arr[i] = 2;
        }
    }
    for(int i = 0; i < t; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}