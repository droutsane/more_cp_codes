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
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<pair<ll,ll>>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i].first;
            v[i].second = i+1;
        }
        sort(v.begin(), v.end());
        ll count =0;
        for(ll i=0;i<n;i++){
            for(ll j=i+1;j<n; j++){
                if(v[i].first *v[j].first>=2*n){
                    break;
                }
                 if(v[i].first * v[j].first== v[i].second + v[j].second){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}