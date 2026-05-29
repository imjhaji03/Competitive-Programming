#include <bits/stdc++.h>
using namespace std;


long long divisor_helper(long long n){
    long long count = 0;
    for(long long i = 1; i <= n; i++){
        if(n % i == 0){
            count++;
        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;
        cout<<divisor_helper(n)<<'\n';
    }

    return 0;
}