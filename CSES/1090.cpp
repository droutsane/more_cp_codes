#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n, x;
    cin>>n>>x;
    vector<int>p(n);
    for(int i=0; i<n; i++){
        cin>>p[i];
    }
    sort(p.begin(), p.end());
    int lo = 0;
    int hi = n-1;
    int cot = 0;
    while(lo<=hi){
        if(p[lo]+p[hi]<= x){
            cot++;
            lo++;
            hi--;
        }else{
            hi--;
            cot++;
        }
    }
    cout<<cot<<endl;
    return 0;
}