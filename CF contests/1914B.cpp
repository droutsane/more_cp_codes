#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        int n, k;
        cin>>n>>k;
        vector<int>v;
        for(int i=n-1-k+1;i<=n;i++){
            v.push_back(i);
        }
        for(int i=n-1-k;i>=1;i--){
            v.push_back(i);
        }
        for(auto it:v){
            cout<<it<<" ";
        }
        cout<<"\n";
    }
    return 0;
}