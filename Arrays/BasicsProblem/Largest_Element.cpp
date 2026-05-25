#include<iostream>
#include<vector>
using namespace std;
class Max{
    public:
    int maximum_Element(vector<int>& arr){
        int max=arr[0];
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }
};
int main(){
    Max m1;
    vector<int>demo;
    demo.push_back(34);
    demo.push_back(45);
    demo.push_back(90);
    demo.push_back(5);
    demo.push_back(89);
    cout<<"Maximum Element is:"<<m1.maximum_Element(demo);
    return 0;

}