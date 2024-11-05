#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>b(n+2);
        ll sum = 0;

        for(int i=0;i<n+2; i++){
            cin>>b[i];
            sum+=b[i];
        }
        sort(b.begin(), b.end());
        int l = b
    }
    return 0;
}