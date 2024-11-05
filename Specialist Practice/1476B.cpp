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
            ll n,k;
            cin>>n>>k;
            vector<ll>a(n);
            ll sum=0;
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            ll l=0,r=1e14;
            while(l<r){
                ll mid=(l+r)/2;
                ll sum=a[0]+mid;
                bool ok=true;
                for(int i=1;i<n;i++){
                    ll x=sum*k/100;
                    if(a[i]>x){
                        ok=false;
                        break;
                    }
                    sum+=a[i];
                }
                if(ok) r=mid;
                else l=mid+1;
            }
            cout<<l<<"\n";
    }
    return 0;
}