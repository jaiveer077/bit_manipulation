#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll a=13,i=2; // checking if second bit is set or not 
    if(13&(1<<i)!=0){
        cout<<"Set bit"<<endl;
    } else {
        cout<<"Not a set bit"<<endl;
    }
    // using right shift operator
    if(13>>i&&1==0){
        cout<<"Not a set bit"<<endl;
    } else {
        cout<<"Set bit"<<endl;
    }
    return 0;
}