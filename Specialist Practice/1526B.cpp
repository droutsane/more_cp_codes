#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
typedef long long ll;

//min heap 
//priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
//max heap
//priority_queue<int> pq;

void solve(){
    int n;
    cin>>n;
    int b = n%11;
    int a = n-b*111;
    if(a>= 0 and a%11 == 0) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}