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
    int n ;
    cin>>n;
    ll sum = 0;
    ll ans = 0;
    for(int i=0;i<n; i++){
        int a;
        cin>>a;
        sum += a;
        
        if(sum < 0){
            ans = max(ans, abs(sum));
        }
    }
    cout<<ans+sum<<endl;
    return 0 ;

}