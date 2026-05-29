#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<int> arr(t);
    while(t--){
        cin>>arr[t];
    }
    int positive = 0;
    int negative = 0;
    int odd = 0;
    int even = 0;

    for(int i=0; i < arr.size(); i++){
        if(arr[i] > 0){
            positive++;
        }
        else if(arr[i] < 0){
            negative++;
        }
    }

    for(int i=0; i < arr.size(); i++){
        if(arr[i] % 2 == 0){
            even++;
        }
        else if(arr[i] % 2 != 0){
            odd++;
        }
    }


    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<negative<<endl;


    return 0;
}