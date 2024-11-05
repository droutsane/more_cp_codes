#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long sum = 0;
    long long maxs = INT_MIN;
    long long maxg = INT_MIN;
    while(n--){
        long long x;
        cin>>x;
        sum+=x;
        maxg = max(maxg, x);
        if(sum<0){
            sum = 0;
        }
        maxs = max(maxs, sum);
    }
    if(maxs){
        cout<<maxs<<endl;
    }else{
        cout<<maxg<<endl;
    }
    return 0;
}