#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll a=2,b=3;
    cout<<"Before: "<<a<<" "<<b<<endl;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"After: "<<a<<" "<<b<<endl;
    return 0;
}