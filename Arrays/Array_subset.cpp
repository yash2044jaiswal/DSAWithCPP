#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Subset{
    public:
    bool isSubset(vector<int> &a, vector<int> &b) {
        unordered_map<int, int> freq;
        
         // Count frequency of elements in a
        for(int x : a) {
            freq[x]++;
        }
        
        // Check and decrease frequency for b
        for(int x : b) {
            if(freq[x] == 0) {
                return false;
            }
            freq[x]--;
        }
        
        return true;
    }
};
int main(){
    Subset s1;
    vector<int>set;
    set.push_back(45);
    set.push_back(98);
    set.push_back(23);
    set.push_back(12);
    vector<int>subset;
    subset.push_back(12);
    subset.push_back(45);
    if(s1.isSubset(set,subset)){
        cout<<"true";
    }else{
        cout<<"false";
    }
    

    return 0;
}