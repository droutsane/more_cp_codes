#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
typedef long long ll;

priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<pair<pair<int, int>, int>> v(n);  // Store arrival, departure, and original index
    for (int i = 0; i < n; i++) {
        cin >> v[i].first.first >> v[i].first.second; // Arrival and departure times
        v[i].second = i; // Original index
    }

    sort(v.begin(), v.end()); // Sort based on arrival and departure times
    int room = 0;
    vector<int> roomno(n); // Store room numbers based on original order
    for (auto it : v) {
        if (!minHeap.empty() && minHeap.top().first < it.first.first) {
            int te = minHeap.top().second;
            minHeap.pop();
            minHeap.push({it.first.second, te});
            roomno[it.second] = te; // Use original index
        } else {
            room++;
            minHeap.push({it.first.second, room});
            roomno[it.second] = room; // Use original index
        }
    }

    cout << room << ln;
    for (int i = 0; i < n; i++) {
        cout << roomno[i] << " ";
    }
    return 0;
}
