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
    int n, d;
    cin>>n>>d;
    int cnt=0;
    int prev = 0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(i==0){
            prev = a;
        }else{
            if(abs(a - prev) > d){
                cnt++;
            }
            prev = a;
        }
    }
    cout<<n-cnt;
    return 0 ;
}