#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void insertAtIndex(vector<int> &arr, int index, int val) {
        arr.resize(arr.size()+1);
        for(int i=arr.size()-1;i>=index;i--){
            arr[i]=arr[i-1];
        }
        
        
        arr[index]=val;
        
    }
};
int main(){
    Solution s1;
    vector<int>array={12,34,11,32,33};
    s1.insertAtIndex(array,3,50);
    for(int i=0;i<array.size();i++){
        cout<<array[i]<<" ";
    }
    return 0;
}