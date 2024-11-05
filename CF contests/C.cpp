#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

long long min_abs_difference(long long a, long long b, long long r) {
    // Function to calculate the minimum absolute difference for a given r
    long long min_diff = LLONG_MAX;

    for (long long x = 0; x <= r; ++x) {
        long long diff = abs((a ^ x) - (b ^ x));
        min_diff = min(min_diff, diff);
    }

    return min_diff;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, r;
        cin >> a >> b >> r;

        long long low = 0;
        long long high = r;
        long long result = -1;

        while (low <= high) {
            long long mid = (low + high) / 2;
            long long mid_diff = min_abs_difference(a, b, mid);

            if (mid_diff < result || result == -1) {
                result = mid_diff;
            }

            if (mid_diff == 0) {
                break;
            } else if (a < b) {
                if ((a ^ mid) < (b ^ mid)) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } else {
                if ((a ^ mid) <= (b ^ mid)) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
        }

        cout << result << endl;
    }

    return 0;
}
