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
        vector<int>v(n);
        ll osum=0;
        ll tsum = 0;
        for(int i=0;i<n; i++){
            cin>>v[i];
            tsum+=v[i];
            if(i%2==0){
                osum+=v[i];
            }
        }
        if(2*(tsum - osum)<= tsum){
            for(int i=0;i<n; i++){
                if(i%2!=0){
                    v[i] = 1;
                }
            }
        }else{
            for(int i=0;i<n; i++){
                if(i%2==0){
                    v[i]=1;
                }
            }
        }
        for(auto it: v){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}