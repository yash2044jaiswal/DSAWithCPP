#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int multiply(vector<int> &arr) {
        // code here
        int n=arr.size()/2;
        int leftsum=0;
        int rightsum=0;
        for(int i=0;i<n;i++){
            leftsum=leftsum+arr[i];
        }
        for(int i=n;i<arr.size();i++){
            rightsum=rightsum+arr[i];
        }
        int res=rightsum*leftsum;
        return res;
    }
};
int main(){
    Solution s1;
    vector<int>arr={12,3,13,234,43};
    cout<<"Answer:"<<s1.multiply(arr)<<endl;
}