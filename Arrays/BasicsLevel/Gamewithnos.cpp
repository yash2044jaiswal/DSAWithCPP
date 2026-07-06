#include<bits/stdc++.h>
using namespace std;
int* game_with_number(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        arr[i] = arr[i] ^ arr[i + 1];
    }
    return arr;
}

int main() {
    int n;
    if (!(cin >> n)) {// Check if input is valid
        return 0;
    }
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout<<"Arr ["<<i<<"] : ";
        cin >> arr[i];
    }
    int* result = game_with_number(arr.data(), n);
    for (int i = 0; i < n; i++) {
        cout << result[i];
        if (i + 1 < n) cout << " ";
    }
    cout << "\n";
    return 0;
}
