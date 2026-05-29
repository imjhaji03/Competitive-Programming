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
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for(int i = 0; i < t; i++){
        cout<<arr[i]<<" ";
    }    
    cout<<endl;

    return 0;
}