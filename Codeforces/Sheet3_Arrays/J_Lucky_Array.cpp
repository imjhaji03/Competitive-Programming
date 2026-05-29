#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    vector<int> arr(t);
    for(int i = 0; i < t; i++){
        cin>>arr[i];
        
    }
    int mn_ele = *min_element(arr.begin(),arr.end());

    int count = 0;
    for(auto it : arr){
        if(it == mn_ele){
            count++;
        }
    }

    if(count % 2 == 1){
        cout<<"Lucky"<<endl;
    }
    else{
        cout<<"Unlucky"<<endl;
    }


    



    return 0;
}