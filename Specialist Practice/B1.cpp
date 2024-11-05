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
    int i=1000;
    for(int i=1000; i<=1100; i++){
        if(i%3 == 2 && i%5 == 4 && i%7==5){
            cout<<i<<" ";
        }
    }
    return 0;
}