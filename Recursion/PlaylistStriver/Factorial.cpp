#include<bits/stdc++.h>
using namespace std;

int factorials(int n){
    if(n==0)return 1;
    return n*factorials(n-1);
}
int main(){
    cout<<factorials(5);
    return 0;
}
