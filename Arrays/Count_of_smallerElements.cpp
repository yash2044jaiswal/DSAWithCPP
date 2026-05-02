#include <bits/stdc++.h>
using namespace std;
class Count_of_smallerElements
{
    public:
    int countOfElements(int x, vector<int> &arr) {
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=x){
                count++;
            }
        }
        return count;
    }
};
int main(){
    Count_of_smallerElements c1;
    vector<int>demo={12,23,44,67,32,123,5};
    cout<<c1.countOfElements(60,demo);
}