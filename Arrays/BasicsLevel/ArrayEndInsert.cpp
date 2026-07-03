#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void insertAtEnd(vector<int> &arr, int val) {
        // code here
        arr.push_back(val);
    }
};
int main(){
    Solution s1;
    vector<int>arr={12,13,43,43,23,1,3};
    cout<<"before inserting:"<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    s1.insertAtEnd(arr,100);
    cout<<"After inserting:"<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
