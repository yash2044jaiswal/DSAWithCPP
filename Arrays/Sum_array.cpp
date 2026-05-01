#include<iostream>
#include<vector>
using namespace std;
class Sum{
    public:
    int arraySum(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum +=arr[i];
        }
        return sum;
    }
};
int main(){
    Sum s1;
    vector<int>demo={12,23,24,23};
    cout<<s1.arraySum(demo);
}
