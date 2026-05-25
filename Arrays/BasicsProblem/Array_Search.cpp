#include<iostream>
#include<vector>
using namespace std;
class Array{
    public:
    int  search(vector<int>& arr,int x){
        for(int i=0;i<arr.size();i++){
            if(arr[i]==x){
                
                return i;
            }
        }
        return -1;
    }
};
int main(){
    Array a;
    vector<int>ans;
    ans.push_back(2);
    ans.push_back(4);
    ans.push_back(45);
    ans.push_back(5);
    ans.push_back(900);
    cout<<"searching:"<<a.search(ans,5);

    return 0;

}