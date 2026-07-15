#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int coin(vector<int>& arr) {
        // code here
        int min=arr[0];
        if(arr.size()==1){
            return arr[0];
        }else{
            for(int i=0;i<arr.size();i++){
                if(arr[i]<min){
                    min=arr[i];
                }
            }
            return min;
        }
    }
};

int main() {
    Solution s1;
    vector<int> array = {5, 3, 8, 1, 4};
    int lastCoin = s1.coin(array);
    cout << "The last coin is: " << lastCoin << endl;
    return 0;
}