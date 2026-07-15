#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int convertFive(int n) {
        // code here
        string str=to_string(n);
        for(int i=0;i<str.size();i++){
            if(str[i]=='0'){
                str[i]='5';
            }
        }
      
        return stoi(str);
    }
};

int main(){
    Solution s1;
    cout<<"replaceble:"<<s1.convertFive(10004)<<endl;

    return 0;
}
