#include<bits/stdc++.h>
using namespace std;
int main(){
    int start=3,end=1;
    int res=start^end,count=0;
    while(res!=0){
        res=res&(res-1);
        count++;
    }
    cout<<count<<endl;
    return 0;
}