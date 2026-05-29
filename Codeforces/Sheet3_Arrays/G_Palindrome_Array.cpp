#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<int> arr(t);
    for(int i = 0; i < t; i++){
        cin>>arr[i];
    }
    int start = 0;
    int end = t-1;

    bool flag = false;

    while(start < end){
        if(arr[start] != arr[end]){
            flag = true;
            break;
        }
        else{
            start++;
            end--;
        }
    }
    if(!flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}