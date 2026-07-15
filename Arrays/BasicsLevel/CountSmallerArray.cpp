#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int countOfElements(int x, vector<int> &arr) {
        // code here
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<= x){
                count++;
            }
        }
        return count;
    }
};

int main(){
    Solution s1;
    vector<int>arr={12,3,2,123,3,9};
    cout<<"count of smaller:"<<s1.countOfElements(5,arr)<<endl;
    return 0;

}