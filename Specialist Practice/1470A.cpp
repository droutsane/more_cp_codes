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
    int t;
    cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        vector<ll>k(n);
        vector<ll>c(m);
        for(ll i=0; i<n; i++){
            cin>>k[i];
        }
        for(ll i=0; i<m; i++){
            cin>>c[i];
        }
        sort(k.begin(), k.end(), greater<int>());
        ll idx=0;
        ll sum = c[0] ;
        for(ll i=1; i<n; i++){
            sum += min(c[idx+1], c[k[i]-1]);
            if(c[idx+1]< c[k[i]-1]){
                idx++;
            }
        }
        
        cout<<sum<<endl;
    }
    return 0;
}