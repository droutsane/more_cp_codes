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
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int m = k;
        if(n <= k){
            cout << 1 << endl;
        }else{
            int ans = n; 
            for(int i = 1; i*i <= n; i++){
                if(n % i == 0){
                    if(i <= k){
                        ans = min(ans, n/i);
                    }
                    if(n/i <= k){
                        ans = min(ans, i);
                    }
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}