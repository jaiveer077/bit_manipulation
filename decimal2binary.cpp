#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll n;
    cout<<"Enter a num: "; cin>>n;
    string res="";
    ll temp=n;
    while(temp!=0){
        if(temp%2==1) res+="1";
        else if(temp%2==0) res+="0";
        temp/=2;
    }
    reverse(res.begin(),res.end());
    cout<<"Binary string: "<<res<<endl;
    return 0;
}