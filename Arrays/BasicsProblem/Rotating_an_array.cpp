#include <bits/stdc++.h>
using namespace std;
class Rotating{
public:
void leftRotate(vector<int>& arr, int d) {
        vector<int>ans;
        for(int i=d;i<arr.size();i++){
            ans.push_back(arr[i]);
        }
        for(int i=0;i<d;i++){
            ans.push_back(arr[i]);
        }
        arr=ans;
        
    }
};
int main(){
    Rotating r1;
    vector<int>ans={12,34,54,21,65};
    r1.leftRotate(ans,2);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
}