#include<iostream>
#include<vector>
using namespace std;
class Rotate_by_one_Array{
public:
    void rotate(vector<int> &arr) {
        vector<int>ans;
        int n=arr.size()-1;
        ans.push_back(arr[n]);
        for(int i=0;i<=n-1;i++){
            ans.push_back(arr[i]);
        }
        arr=ans;
    }
};
int main(){
    Rotate_by_one_Array r1;
    vector<int>arr1={12,23,45,87};
    r1.rotate(arr1);
    for (int i = 0; i < arr1.size(); i++)
    {
        cout<<arr1[i]<<" ";
    }
    

    return 0;
}


