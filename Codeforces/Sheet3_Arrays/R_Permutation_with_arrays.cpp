#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<int> arr(t);
    vector<int> brr(t);
    unordered_map<int, int> mpp1;
    unordered_map<int, int> mpp2;

    for(int i = 0; i < t; i++){
        cin>>arr[i];
        mpp1[arr[i]]++;
    }
    for(int i = 0; i < t; i++){
        cin>>brr[i];
        mpp2[brr[i]]++;
    }

    if(mpp1 == mpp2){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }


    return 0;
}