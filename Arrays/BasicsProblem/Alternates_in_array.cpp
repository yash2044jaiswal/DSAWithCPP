#include<iostream>
#include<vector>
using namespace std;
class Alternates{
    public:
    vector<int> getAlternates(vector<int> &arr) {
        
        vector<int> ans;
        for(int i=0;i<arr.size();i+=2){
            ans.push_back(arr[i]);
        }
        
        return ans;
    }
};
int main(){
    vector<int>arr1={12,23,24,45,78,49};
    Alternates a1;
    vector<int>result=a1.getAlternates(arr1);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}