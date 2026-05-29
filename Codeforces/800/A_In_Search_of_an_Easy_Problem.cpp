#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    vector<int> arr(t);
    for(int i = 0; i < t; i++){
        cin>> arr[i];
    }

    bool flag = false;
    for(int i = 0; i < t; i++){
        if(arr[i] == 1){
            flag = true;
            break;
        }
    }

    if(flag){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }

    return 0;
}