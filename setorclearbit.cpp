#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    // SET
    ll a=9;
    ll b=9|(1<<2);
    cout<<b<<endl;
    // CLEAR 
    ll c=a&~(1<<2);
    cout<<c<<endl;
    // toggle 
    ll d=a^(1<<2);
    cout<<d<<endl;
    return 0;
}