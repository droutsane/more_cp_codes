#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, w;
        cin >> n >> w;
        vector<int> v(n);
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }
        sort(v.begin(), v.end(), greater<int>());

        int height = 0;
        while (sum > 0) {
            ll width_used = 0;
            for (int i = 0; i < n; ++i) {
                if (v[i] != -1 && width_used + v[i] <= w) {
                    width_used += v[i];
                    sum -= v[i];
                    v[i] = -1; 
                }
            }
            height++;
        }
        cout << height << endl;
    }
    return 0;
}
