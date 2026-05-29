#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    bool flag = false;
    for(int i = 2; i <= t; i++){
        if(i % 2 == 0){
            flag = true;
            cout<<i<<endl;
        }
        
    }
    if(!flag){
        cout<<"-1"<<endl;
    }

    return 0;
}