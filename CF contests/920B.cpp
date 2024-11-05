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
        string s1, s2;
        cin>>s1>>s2;
        int total=0;
        int a=0, b=0;
        for(int i=0;i<n;i++){
            if(s1[i] != s2[i]){
                int s = s1[i]-'0';
                if(s == 0){
                    a++;
                }else{
                    b++;
                }
                total++;
            }
        }
        cout<<total-min(a,b)<<endl;
    }
    return 0;
}