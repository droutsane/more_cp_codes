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
        vector<int>a(n);
        int f=0;
        int first = 0;
        int last = 0;
        for(int i=0;i<n; i++){
            cin>>a[i];
            if(f==0 and a[i]==1){
                first = i;
                last = i;
                f++;
            }else{
                if(a[i]==1){
                    last = i;
                }
            }

        }  
        // for(int i=0;i<n; i++){
        //     if(a[i]==1){
        //         first=i;
        //         i=n;
        //     }
        // }
        // for(int i=n-1; i>=0; i--){
        //     if(a[i]==1){
        //         last = i;
        //         i = -1;
        //     }
        // }
        int cnt=0;
        for(int i=first; i<=last; i++){
            if(a[i]==0){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}