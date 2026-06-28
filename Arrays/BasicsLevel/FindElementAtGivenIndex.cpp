#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int findElementAtIndex(int i, vector<int> &arr) {
        // code here
        return arr[i];
    }
};
int main() {
    Solution s1;
    vector<int> array = {10, 20, 30, 40, 50};
    int index = 2;
    int ans = s1.findElementAtIndex(index, array);
    cout << "Element at index " << index << ": " << ans << endl;
    return 0;
}