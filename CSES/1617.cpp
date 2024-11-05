#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main(){
    ll n;
    cin>>n;
    ll a = 2;
    ll ans = 1;
    ll M = 1000000007;
    while(n){
        if(n&1){
            ans = (ans * a)%M;
        }
        a = (a* a)%M;
        n>>=1;
    }
    cout<<ans;
    return 0;
}