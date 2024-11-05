#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long y, x;
        cin>>y>>x;
        if(y>=x){
            if(y%2==0){
                cout<<(y*y-(x-1))<<"\n";
            }else{
                cout<<(y*y-(2*y - x-1))<<"\n";
            }
        }else{
            if(x%2==0){
                cout<<(x*x - (2*x-y-1))<<"\n";
            }else{
                cout<<(x*x -(y-1))<<"\n";
            }
        }
    }
    return 0;
}