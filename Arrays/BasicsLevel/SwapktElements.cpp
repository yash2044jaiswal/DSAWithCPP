#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void swapKth(vector<int> &arr, int k) {
        // code here
        int n=arr.size()-k;
        int temp=arr[k-1];
        arr[k-1]=arr[n];
        arr[n]=temp;
        
  
    }
};
int main(){
    Solution s1;
    vector<int>arr={12,13,43,43,23,1,3};
    cout<<"before swaping:"<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    s1.swapKth(arr,2);
    cout<<"After swaping:"<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
