#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
        // code here
        long long sum=0;
        for(int i=0;i<car.size();i++){
            
                if(date%2==0){
                    if(car[i]%2==1){
                        sum=sum+fine[i];
                    }
                }else{
                    if(car[i]%2==0){
                        sum=sum+fine[i];
                    }
                }
            
        }
        return sum;
    }
};
int main(){
    Solution obj;
    int date;
    cout<<" Enter Date : ";
    cin>>date;
    int n;
    cout<<"Number of cars : ";
    cin>>n;
    vector<int> car(n);
    vector<int> fine(n);
    for(int i=0;i<n;i++){
        cout<<"Car ["<<i<<"] : ";
        cin>>car[i];
        cout<<"Fine ["<<i<<"] : ";
        cin>>fine[i];
    }
    cout << "ans: "<<obj.totalFine(date, car, fine) << endl;
    return 0;
}
