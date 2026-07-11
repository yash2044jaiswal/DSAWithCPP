#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> getMoreAndLess(vector<int> &arr, int target) {
        // code here
        int maxcount=0;
        int mincount=0;
        int mid=arr.size()/2;
        vector<int>res;
        
        for(int i=0;i<arr.size();i++){
           if(arr[i]>=target){
               maxcount++;
           }
           if(arr[i]<=target){
               mincount++;
           }
        }
        res.push_back(mincount);
        res.push_back(maxcount);
        return res;
    }
};
//main method  for calling function
int main() {
    Solution s1;
    vector<int> array = {1, 2, 3, 4, 5};
    int target = 4;
    vector<int> ans = s1.getMoreAndLess(array, target);
    cout << "Count of elements less than or equal to " << target << ": " << ans[0] << endl;
    cout << "Count of elements greater than or equal to " << target << ": " << ans[1] << endl;
    return 0;
}
