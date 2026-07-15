#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getSecondLargest(vector<int> &arr) {
        int largest = -1;
        int secondLargest = -1;

        for(int num : arr) {
            if(num > largest) {
                secondLargest = largest;
                largest = num;
            }
            else if(num < largest && num > secondLargest) {
                secondLargest = num;
            }
        }

        return secondLargest;
    }
};
int main(){
    vector<int> array={10, 20, 30, 40, 50};
    Solution s1;
    cout<<"Second Largest Element is: "<<s1.getSecondLargest(array)<<endl;
    return 0;

}