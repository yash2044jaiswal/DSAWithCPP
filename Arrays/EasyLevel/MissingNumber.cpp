#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int max=0;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum=sum+arr[i];
            if(arr[i]>max){
                max=arr[i];
            }
        }
        int reqsum=0;
        for(int i=1;i<=max;i++){
            reqsum=reqsum+i;
        }
        if(arr.size()==max){
            return arr.size()+1;
        }
        return reqsum-sum;
    }
};
int main(){
    Solution s1;
    vector<int>array;
    array.push_back(1);
    array.push_back(3);
    array.push_back(4);
    array.push_back(5);
    array.push_back(6);
    cout<<"missing element:"<<s1.missingNum(array)<<endl;
    return 0;

}