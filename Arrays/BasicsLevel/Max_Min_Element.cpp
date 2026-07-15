#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int min=arr[0],max=arr[0];
        for(int i=0;i<arr.size();i++){
            if(arr[i]<min){
                min=arr[i];
            }
            
        }
        for(int i=0;i<arr.size();i++){
           
            if(arr[i]>max){
                max=arr[i];
            }
        }
        
        vector<int>res;
        res.push_back(min);
        res.push_back(max);
        return res;
    }
};
int main(){
    Solution s1;
    vector<int>array={12,34,53,13,1};
    vector <int>res=s1.getMinMax(array);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}