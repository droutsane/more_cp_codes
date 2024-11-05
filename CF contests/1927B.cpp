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
        int n,m, k;
        cin>>n>>m>>k;
        vector<int>a(n);
        vector<int>b(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        set<int>st;
        int acnt=0;
        int bcnt=0;

        for(int i=0;i<=n;i++){
            if(a[i]<=k and acnt <k/2){
                if(st.find(a[i])!= st.end()){
                    st.insert(a[i]);
                    acnt++;
                }
                
            }
        }
        for(int i=0;i<=m;i++){
                if(b[i]<=k and bcnt <k/2){
                    if(st.find(b[i])!= st.end()){
                    st.insert(b[i]);
                    bcnt++;
                }
                
            }
        }
        if(st.size()==k){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}