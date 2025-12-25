#include<bits/stdc++.h>
using namespace std;
bool checkSetBit(int n,int i){
    if(n&(1<<i)){
        return true;
    }
    return false;
}
int main(){
    vector<int> nums={1,2,3};
    vector<vector<int>> result;
    int n=nums.size();
    int a=nums[0],b=nums[1],c=nums[2];
    for(int i=0;i<1<<n;i++){ // 1<<n = 2^n
        vector<int> temp;
        if(checkSetBit(i,0)){
            temp.push_back(nums[0]);
        } 
        if(checkSetBit(i,1)){
            temp.push_back(nums[1]);
        } 
        if(checkSetBit(i,2)){
            temp.push_back(nums[2]);
        }
        result.push_back(temp);
    }
    sort(result.begin(),result.end());
    for(auto &row:result){
        for(auto c:row){
            cout<<"["<<c<<"]";
        }cout<<" ";
    }
    return 0;
}