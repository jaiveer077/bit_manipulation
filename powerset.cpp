#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> answer;
    vector<int> nums={1,2,3};
    int n=nums.size();
    for(int i=0;i<(1<<n);i++){
        vector<int> temp;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                temp.push_back(nums[j]);
            }
        }
        answer.push_back(temp);
    }
    for(auto &row:answer){
        for(auto c:row){
            cout<<c<<" ";
        }cout<<endl;
    }
    return 0;
}