#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int arraySum(vector<int>& arr) {
        // code here
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum =sum+arr[i];
        }
        return sum;
    }
};
int main(){
    Solution s1;
    vector<int>arr={12,3,2,123,3,9};
    cout<<"sum of elements:"<<s1.arraySum(arr)<<endl;
    return 0;
}