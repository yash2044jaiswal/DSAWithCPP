//wap to search element of array and return index if element is not present then return -1

#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int search(vector<int> &arr,int x){
        for(int i=0;i<arr.size();i++){
            if(x==arr[i]){
                return i;
            }
        }
        return -1;
    }
};
int main(){
    Solution s1;
    vector<int> array;
    array.push_back(12);
    array.push_back(16);
    array.push_back(15);
    array.push_back(14);
    array.push_back(13);
    cout<<"index:"<<s1.search(array,12)<<endl;
    return 0;
}