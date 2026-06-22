#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool palindrome(int x){
            int rev=0;
            int original = x;
            while(x>0){
                int rem=x%10;
                rev=(rev*10)+rem;
                x=x/10;
            }
            return original == rev;
        }
    bool isPalinArray(vector<int> &arr) {
        // code here
        
        
        for(int i=0;i<arr.size();i++){
            if(!palindrome(arr[i])){
                return false;
            }
        }
        return true;
    }
};
int main(){
    Solution s1;
    vector<int>arr={12,34,23,232,323,12};
    cout<<"is Palindrome :"<<s1.isPalinArray(arr)<<endl;

}