#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int>& arr, int p) {

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end) {

        int mid = start + (end - start) / 2;

        if (arr[mid] == p) {
            return true;
        }

        else if (arr[mid] > p) {
            end = mid - 1;
        }

        else {
            start = mid + 1;
        }
    }

    return false;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    while (q--) {

        int p;
        cin >> p;

        if (binarySearch(arr, p)) {
            cout << "found"<<'\n';
        }

        else {
            cout << "not found"<<'\n';
        }
    }

    return 0;
}