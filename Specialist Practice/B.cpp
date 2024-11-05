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
        int n, k;
        cin>>n>>k;
        vector<int>a(n);
        vector<int>b(2*n, 0);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>x(n);
        for(int i=0;i<n; i++){
            cin>>x[i];
            if(x[i]<0){
            int pos =(x[i]*-1)-1;
            b[pos]+=a[i];
            }else{
                int xos = x[i]-1;
                b[xos]+=a[i];
            }
        }
        int surplus = 0;
        int y = 0;
            while(surplus>-1){
                surplus = surplus + k - b[y];
                if(surplus>=0){
                    y++;
                }
            }
        if(y>=n){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}