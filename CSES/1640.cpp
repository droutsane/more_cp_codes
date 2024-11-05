#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin>>n>>x;
    map<int,int>mp;
    for(int i=1;i<=n; i++){
        int a;
        cin>>a;
        int rem = x-a;
        if(mp.find(rem)!=mp.end()){
            cout<<mp[rem]<<" "<<i;
            return 0;
        }
        mp[a]=i;
    }
    cout<<"IMPOSSIBLE";
    return 0;
}