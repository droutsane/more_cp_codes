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
        int n,k, x;
        cin>>n>>k>>x;
        vector<int>v(n);
        ll sum =0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        sort(v.begin(), v.end(), greater<int>());

        ll calf = 0;
        ll ans = INT_MIN;
        ll ifzero = ans;

        for(int i=0;i<x;i++){
            ifzero -= 2*v[i];
        }

        for(int i=0;i<k;i++){
            ll first = accumulate(v.begin(), v.begin()+i, 0);
            ll last = accumulate(v.begin()+i, v.begin()+i+x, 0);
            
            ans = max(ans, sum-first-2*last);
        }
        cout<<max(ans, ifzero)<<endl;

    }
    
    return 0;
}
