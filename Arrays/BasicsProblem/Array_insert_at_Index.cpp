#include <bits/stdc++.h>
using namespace std;
class ArrayInsert{
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
    ArrayInsert a1;
    vector<int>ans={12,23,24,45,21};
    a1.insertAtIndex(ans,2,90);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
