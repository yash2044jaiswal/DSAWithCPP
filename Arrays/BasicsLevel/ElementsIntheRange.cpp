#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool checkElements(int start, int end, vector<int> &arr) {
        int count=0;
        int required=end-start+1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=start && arr[i]<=end){
                count++;
            }
        }
        return required==count;
    }
};

int main() {
    Solution s1;
    vector<int> array = {1, 2, 3, 4, 5};
    int start = 1;
    int end = 5;
    bool ans = s1.checkElements(start, end, array);
    if(ans){
        cout << "All elements in the range [" << start << ", " << end << "] are present in the array." << endl;
    } else {
        cout << "Not all elements in the range [" << start << ", " << end << "] are present in the array." << endl;
    }
    return 0;
}