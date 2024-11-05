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
        int n;
        cin>>n;
        vector<int>h(n);
        int diff = INT_MAX;
        int idx=0, idy=0;
        for(int i=0;i<n;i++){
            cin>>h[i];
        }
        sort(h.begin(), h.end());
        if(n<=2){
            for(int i=0;i<n;i++){
                cout<<h[i]<<" ";
            }
            cout<<endl;
        }else{
            for(int i=0;i<n-1; i++){
            if(diff > h[i+1]-h[i]){
                diff = h[i+1]-h[i];
                idx = i;
                idy = i+1;
            }
        }
        
        for(int i=idy; i<n; i++){
            cout<<h[i]<<" ";
        }
        for(int i=0; i<=idx; i++){
            cout<<h[i]<<" ";
        }
        cout<<endl;
        }
        
    }
    return 0;
}