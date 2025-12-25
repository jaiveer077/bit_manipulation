#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    cout<<"Enter the binary string: ";
    getline(cin,s);
    ll n=0,p=1;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='1'){
            n=n+p;
        }
        p*=2;
    }
    cout<<"Decimal number: "<<n<<endl;
    return 0;
}