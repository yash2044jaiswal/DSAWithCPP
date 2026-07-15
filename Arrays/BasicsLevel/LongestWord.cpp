#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string longest(vector<string>& arr) {
        // code here
        int length=0;
        string str1;
        for(int i=0;i<arr.size();i++){
            if(arr[i].length()>str1.length()){
                str1=arr[i];
            }
        }
        return str1;
    }
};

int main() {
    Solution s1;
    vector<string> array = {"apple", "banana", "cherry", "date"};
    string longestWord = s1.longest(array);
    cout << "The longest word is: " << longestWord << endl;
    return 0;
}