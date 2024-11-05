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
        int n,q,k;
    cin>>n>>q>>k;
    vector<int> a(n);
    for(auto &x : a)cin>>x;
    vector<int> dis(n);
    for(int i=0;i<n;i++){
        if(i==0){
            if(n!=1){
                dis[i]=a[1]-2;
            }
        }
        if(i!=0&&i!=n-1){
            dis[i]=a[i+1]-a[i-1]-2;
        }
    }
    int dissum[n];
    dissum[0]=0;
    for(int i=1;i<n-1;i++){
        dissum[i]=dissum[i-1]+dis[i];
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        l--,r--;
        if(l==r)cout<<k-1<<'\n';
        else{
            ll ans=a[l+1]-2+k-a[r-1]-1;
            ans += dissum[r-1]-dissum[l];
            cout<<ans<<'\n';
        }
    }
    return 0;
}