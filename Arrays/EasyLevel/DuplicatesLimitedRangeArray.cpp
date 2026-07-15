#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        vector<int> res;
        unordered_map<int, int> count;
        
        for (int i = 0; i < arr.size(); i++) {
            count[arr[i]]++;
        }
        
        for (auto& p : count) {
            if (p.second > 1) {
                res.push_back(p.first);
            }
        }
        
        return res;
    }
};
int main(){
    Solution s1;
    vector<int>array={2, 3, 1, 2, 3};
    vector <int>res=s1.findDuplicates(array);
    cout<<"Duplicates in array is"<<endl;
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}