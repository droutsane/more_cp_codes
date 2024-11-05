#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
typedef long long ll;

//min heap 
//priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
//max heap
//priority_queue<int> pq;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    ll n;
    cin>>n;
    vector<int> dp(n+1, 0);
    dp[0]=1;
    int mod = 1000000007;
    for(int i=1; i<n+1;i++){
        for(int x=1;x<=6; x++){
            if(x>i)
                break;
            dp[i]=(dp[i]+dp[i-x])%mod;
        }
        
    }
    cout<<dp[n];
    return 0;
}
