
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        vector<int> res;
        int i=0;
      
        
        while(i<arr.size()){
            res.push_back(arr[i]);
            i=i+2;
        }
        return res;
    }
};
int main(){
    Solution s1;
    vector<int>array={1,12,11,4,45,6};
    vector <int>result=s1.getAlternates(array);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
