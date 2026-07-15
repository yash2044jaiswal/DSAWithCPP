#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    /*Function to count even and odd elements in the array
     * arr : Array with its elements
     */
    pair<int, int> countOddEven(vector<int> &arr) {
        // your code here
        int evencount=0;
        int oddcount=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2==0){
                
                evencount++;
            }else{
                oddcount++;
            }
        }
        return {oddcount,evencount};
    }
};
int main(){
   Solution s1;
    vector<int> array = {12,34,23,212,232};
    pair<int,int> ans = s1.countOddEven(array);
    cout << "Odd Count: " << ans.first << endl;
    cout << "Even Count: " << ans.second << endl;
    return 0;
}
