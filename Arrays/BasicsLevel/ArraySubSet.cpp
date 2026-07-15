#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool isSubset(vector<int> &a, vector<int> &b) {

        unordered_map<int,int> mp;

        for(int i=0;i<a.size();i++){
            mp[a[i]]++;
        }

        
        for(int i=0;i<b.size();i++){
            if(mp[b[i]]==0){
                return false;
            }

            mp[b[i]]--;
        }

        return true;
    }
};
int main(){
    Solution s1;
    vector<int> set1={12,3,4,1,45,65};
    vector<int> set2={12,45,65};
    cout<<"Is subset:"<<s1.isSubset(set1,set2)<<endl;
    return 0;
}