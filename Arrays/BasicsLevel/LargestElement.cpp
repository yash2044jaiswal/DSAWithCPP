#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int max=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }
};


int main(){
    Solution s1;
    vector<int> array={12,34,32,12,32};
    cout<<"Largest:"<<s1.largest(array)<<endl;
    return 0;
}