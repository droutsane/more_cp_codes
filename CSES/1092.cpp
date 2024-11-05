#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin>>n;
    ll sum = n*(n+1)/2;
    if(sum%2==0 && sum%n==0){
        vector<ll>a;
        vector<ll>b;
        for(int i=1;i<=n/2;i++){
            if(i<=n/4){
                a.push_back(i);
                a.push_back(n-i);
            }
            
        }
        
    }else{
        cout<<"NO"<<endl;
        return 0;
    }
    
}