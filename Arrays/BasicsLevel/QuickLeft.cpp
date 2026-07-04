#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void leftRotate(vector<int>& arr, int k) {
        int n = arr.size();
        k = k % n;

        // Reverse first k elements
        int i = 0, j = k - 1;
        while (i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }

        // Reverse remaining elements
        i = k;
        j = n - 1;
        while (i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }

        // Reverse whole array
        i = 0;
        j = n - 1;
        while (i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
};
int main(){
    Solution s1;
    vector<int>res{12,32,12,22,231};
    cout<<"Before left rotation:"<<endl;
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    s1.leftRotate(res,2);
    cout<<"After left rotation:"<<endl;
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;

}