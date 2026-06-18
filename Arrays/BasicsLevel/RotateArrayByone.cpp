#include <bits/stdc++.h>
using namespace std;
// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n=arr.size()-1;
        vector<int> res;
        res.push_back(arr[n]);
        for(int i=0;i<=n-1;i++){
            res.push_back(arr[i]);
        }
        arr=res;
        
    }
};
int main(){
    Solution s1;
    vector<int>array={12,34,11,32,32};
    s1.rotate(array);
    for(int i=0;i<array.size();i++){
        cout<<array[i]<<" ";
    }
    return 0;
}