#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        ll minValue = LLONG_MIN; 
        ll maxValue = LLONG_MAX; 
        set<ll> excluded;

        for (int i = 0; i < n; i++) {
            int type;
            ll x;
            cin >> type >> x;
            if (type == 1) {
                minValue = max(minValue, x);
            } else if (type == 2) {
                maxValue = min(maxValue, x);
            } else if (type == 3) {
                excluded.insert(x);
            }
        }

        ll count = 0;
        if (minValue <= maxValue) {
            count = maxValue - minValue + 1; 
            for (ll num : excluded) {
                if (num >= minValue && num <= maxValue) {
                    count--;
                }
            }
        }
        cout << count << ln;
    }
    return 0;
}
