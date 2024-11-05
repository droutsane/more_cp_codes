#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        unordered_map<char, int>mp;
        int n;
        string s;
        cin>>n;
        cin>>s;
        for(auto it:s){
            mp[it]++;
        }
        int count = 0;
        for(auto it:mp){
            if((it.first - 'A'+1)<= it.second){
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}