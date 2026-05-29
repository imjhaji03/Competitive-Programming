#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<int> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int min_ele = INT_MAX;

        for(int i = 0; i < n; i++){

            for(int j = i + 1; j < n; j++){

                min_ele = min(min_ele, arr[i] + arr[j] + (j + 1) - (i + 1));
            }
        }

        cout << min_ele << endl;
    }

    return 0;
}