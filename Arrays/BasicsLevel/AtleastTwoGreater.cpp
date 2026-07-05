#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> findElements(vector<int> arr) {
        sort(arr.begin(), arr.end());
        //removing two grater
        arr.pop_back();
        arr.pop_back();
        return arr;
    }
};
int main(){
    Solution s1;
    vector<int>array={12,3,1,3,4,5};
    cout<<"Before removeing two greaters:"<<endl;
    for(int i=0;i<array.size();i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    vector<int>res=s1.findElements(array);
    cout<<"Before removeing two greaters:"<<endl;
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}