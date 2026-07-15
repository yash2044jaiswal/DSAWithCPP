#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> res;
        int n = arr.size();
        if (n == 0) return res;

        int maxFromRight = arr[n - 1];
        res.push_back(maxFromRight);
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= maxFromRight) {      
                maxFromRight = arr[i];
                res.push_back(maxFromRight);
            }
        }

        reverse(res.begin(), res.end());       
        return res;
    }
};
int main(){
    Solution s1;
    vector<int>array={12,34,53,13,1};
    vector <int>res=s1.leaders(array);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}