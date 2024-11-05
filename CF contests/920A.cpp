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
        int x1, x2, x3, x4, y1, y2, y3, y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        int pt1 = (x1-x2);
        int pt2 = (y1-y2);
        int pt3 = (x1-x3);
        int pt4 = (y1-y3);
        int a = (pt1*pt1) + (pt2*pt2);
        int b = (pt3*pt3) + (pt4*pt4);
        cout<<min(a,b)<<endl;
    }
    return 0;
}