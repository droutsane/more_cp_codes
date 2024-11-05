#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        int ans = 0;
        int coins[5] = {15, 10, 6, 3, 1}; 
        
        for (int i = 0; i < 5; i++) {
            int alt = INT_MAX;  // This variable should be initialized to a large value, not 0
            int pnt=0;
            for(int j=i; j<n; j++){  // This loop should start from i, not 0
                if(n%coins[j]==0){
                    alt = n/coins[j];
                    pnt = j;
                    j=6;  // This breaks the loop prematurely, use 'break' instead
                }
            }
            if(alt<= n/coins[i]){  // This condition is incorrect
                ans +=n/coins[pnt];
                n%=coins[pnt];
            }else{
                ans += n / coins[i];
                n %= coins[i];
            }
            
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
