#include <bits/stdc++.h>
using namespace std;

bool divisor_helper(long long n){
    bool flag = false;
    for(long long i = 2; i <= n; i++){
        if(n % i == 0 && i % 2 != 0){
            flag = true;
        }
    }

    if(flag){
        return false;
    }
    else{
        return true;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        bool res = divisor_helper(n);
        
        if(!res){
            cout<<"NO"<<'\n';
        }
        else{
            cout<<"YES"<<'\n';
        }
    }

    
    return 0;
}