#include <bits/stdc++.h>
using namespace std;

class Replace_0_with_5
{
    public:
    int convertFive(int n) {
        string str=to_string(n);
        for(int i=0;i<str.size();i++){
            if(str[i]=='0'){
                str[i]='5';
            }
        }
        int num=stoi(str);
        return num;
    }
};
int main(){
    Replace_0_with_5 r1;
    cout<<r1.convertFive(1000005);
}
