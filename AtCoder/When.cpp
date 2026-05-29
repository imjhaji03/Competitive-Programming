#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int k;
    cin>>k;

    int set_time = 21*60;

    int new_time = set_time + k;

    int hr = new_time / 60;
    int min = new_time % 60;

    cout << setw(2) << setfill('0') << hr << ":" << setw(2) << setfill('0') << min << '\n'; 

    return 0;
}