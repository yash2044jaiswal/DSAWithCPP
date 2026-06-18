#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> valEqualToPos(vector<int>& arr) {
        int n=arr.size();
        vector<int>res;
        for(int i=0;i<n;i++){
            if(arr[i]==i+1){
                res.push_back(i+1);
            }
        }
        return res;
    }
};
int main(){
    Solution s1;
    vector<int>array={1,12,11,4,45,6};
    vector <int>res=s1.valEqualToPos(array);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}