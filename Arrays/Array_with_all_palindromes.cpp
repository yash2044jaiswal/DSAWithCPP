#include<iostream>
#include<vector>
using namespace std;
class palindromes{
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
    vector<int>fl={123,121,345};
    vector<int>tr={111,121,1331,1441,1551};
    palindromes p1;
    cout<<p1.isPalinArray(tr)<<endl;
    cout<<p1.isPalinArray(fl)<<endl;
}