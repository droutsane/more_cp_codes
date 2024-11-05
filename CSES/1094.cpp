#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long ans=0;
    long long prev = 0;
    while(n--){
        long long x;
        cin>>x;
        if(x<prev){
            ans +=(prev-x);
            x+=prev-x;
        }
        prev = x;
    }
    cout<<ans;
    return 0;
}