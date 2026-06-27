#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getOddOccurrence(vector<int>& arr) {
       int ans = 0;

        for (int x : arr) {
            ans ^= x;
        }

        return ans;
    }
};
int main() {
    Solution s1;
    vector<int> array = {1, 2, 3, 2, 3, 1, 3};
    int ans = s1.getOddOccurrence(array);
    cout << "Element with Odd Occurrence: " << ans << endl;
    return 0;
}