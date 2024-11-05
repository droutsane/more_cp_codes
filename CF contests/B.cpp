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
        // vector<int>a(n);
        // vector<int>b(n);
        vector<pair<int,int>>v(n);
        for(int i=0;i<n; i++){
            cin>>v[i].first;
        }
        for(int i=0;i<n; i++){
            cin>>v[i].second;
        }
       
        sort(v.begin(), v.end());
        for(int i=0;i<n; i++){
            cout<<v[i].first<<" ";
        }
        cout<<endl;
        for(int i=0;i<n; i++){
            cout<<v[i].second<<" ";
        }
        cout<<endl;
    }
    return 0 ;
}