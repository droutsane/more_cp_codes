#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int, int>>events;
    while(n--){
        int a;
        int b;
        cin>>a>>b;
        events.push_back({a, 1});
        events.push_back({b, -1});
    }
    sort(events.begin(), events.end());
    int ans=0;
    int mans=0;
    for(auto it:events){
        ans+=it.second;
        mans = max(mans, ans);
    }
    cout<<mans;
    return 0;
}