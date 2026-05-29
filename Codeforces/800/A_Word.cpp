#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin>>s;

    int uppercnt = 0;
    int lowercnt = 0;

    for(auto it : s){
        if(isupper(it)){
            uppercnt++;
        }
        else{
            lowercnt++;
        }
    }


    if(uppercnt > lowercnt){
        for(auto &it : s){
            it = toupper(it);
        }
    }
    else{
        for(auto &it : s){
            it = tolower(it);
        }
    }

    cout<<s<<'\n';

    return 0;
}