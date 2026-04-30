#include<iostream>
#include<vector>
using namespace std;

class ValueEqualPosition{
public:
     vector<int> valEqualToPos(vector<int>& arr) {
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==i+1){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};
int main(){
    ValueEqualPosition v1;
    vector<int> arr1={12,34,3,55,5,6,7};
    vector<int> result = v1.valEqualToPos(arr1);

    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    

}