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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l=0, r=0;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                l=i;
                i=n;
            }
        }

        for(int i=n-1; i>=0; i--){
            if(s[i]=='B'){
                r=i;
                i=-1;
            }
        }

        cout<<r-l+1<<endl;
    }
    return 0;
}