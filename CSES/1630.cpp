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
    vector<pair<ll,ll>>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(), v.end());
    ll time=0;
    ll reward = 0;
    for(auto it:v){
        time+= it.first;
        reward+=(it.second-time);
    }
    cout<<reward<<ln;
    return 0;
}
