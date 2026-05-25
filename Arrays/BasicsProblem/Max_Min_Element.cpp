#include<iostream>
#include<vector>
using namespace std;
class Max_Min_Element
{

public:
    vector<int> maxMin(vector<int>& arr){
        int max=arr[0];
        int min=arr[0];
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]<min){
                min=arr[i];
            }
        }
        ans.push_back(max);
        ans.push_back(min);
        return ans;
    }
};

int main(){
    Max_Min_Element m1;
    vector<int> demo = {34, 56, 89, 23, 67};

    vector<int> result = m1.maxMin(demo);

    cout << "Maximum Element: " << result[0] << endl;
    cout << "Minimum Element: " << result[1] << endl;
    return 0;
}

