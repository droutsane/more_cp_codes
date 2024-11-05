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

    ll n, q;
    cin>>n>>q;
    vector<ll>v(n);
    ll prefix = 0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        v[i] = prefix + v[i];
        prefix = v[i];
    }
    while(q--){
        ll a, b;
        cin>>a>> b;
        if (a == 1) {
            cout << v[b-1] << endl;
        } else {
            cout << (v[b-1] - v[a-2]) << endl;
        }

    }
    return 0;
}