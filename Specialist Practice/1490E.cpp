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
        vector<pair<int,int>>a(n);
        ll sum = 0;
        for(int i=0;i<n; i++){
            cin>>a[i].first;
            a[i].second=i;
            sum+=a[i].first;
        }
        sort(a.begin(), a.end());
        vector<int>b(n, 0);
        int cnt=0;
        for(int i=n-1; i>=0; i--){
            sum = sum - a[i].first;
            if(sum < a[i].first){
                b[a[i].second] = 1;
                cnt++;
                i=-1;
            }else{
                b[a[i].second] = 1;
                cnt++;
            }
        }
        cout<<cnt<<endl;
        for(int i=0;i<n; i++){
            if(b[i]){
                cout<<i+1<<" ";
            }
        }
        cout<<endl;

    }
    return 0;
}