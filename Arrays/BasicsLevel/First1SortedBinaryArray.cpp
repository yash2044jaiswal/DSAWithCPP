#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int firstIndex(vector<int> &arr) {
        // Your code goes here
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1){
                return i;
                break;
                
            }
        }
        return -1;
    }
    
};
int main(){
    Solution s1;
    vector<int>res={0, 0, 0, 0, 0, 0, 1, 1, 1, 1};
    cout<<s1.firstIndex(res);
    return 0;
}