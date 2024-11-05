#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--) {
        int n,m;
        cin>>n>>m;
        cout<<n*(m/2)<<endl;
    }
    return 0;
}
