#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    ll k = 0;
    for(ll i=0;i<n;i++){
        if(v[i]<= k+1){
            k+=v[i];
        }else{
            cout<<k+1;
            return 0;
        }
    }
    cout<<k+1;
    return 0;
}