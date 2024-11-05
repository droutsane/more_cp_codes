#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a = n/2;
    
    vector<long long> v;
    while(n--){
        long long x;
        cin>>x;
        v.push_back(x);
        
    }
    sort(v.begin(), v.end());
    long long avg = v[a];
    long long ans = 0;
    for(auto it: v){
        ans += abs(it - avg);
    }
    cout<<ans;
    return 0;
}