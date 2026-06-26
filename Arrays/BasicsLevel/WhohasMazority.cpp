#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int moreFrequent(vector<int>& arr, int x, int y) {
        // code here
        int xcount=0;
        int ycount=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==x){
                xcount++;
            }
            if(arr[i]==y){
                ycount++;
            }
        }
        if(xcount>ycount){
            return x;
        }else if(xcount<ycount){
            return y;
        }else{
            if(x>y){
                return y;
            }else{
                return x;
            }
        }
    }
};
int main(){
   Solution s1;
    vector<int> array = {12,34,23,212,232,12,34,12};
    int x = 12;
    int y = 34;
    int ans = s1.moreFrequent(array, x, y);
    cout << "More Frequent Element: " << ans << endl;
    return 0;
}