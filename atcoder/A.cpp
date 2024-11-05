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
    string s;
    cin>>s;
    int st = -1;
    for(int i=s.size()-1; i>=0; i--){
        if(s[i]=='.'){
            st = i;
            i = -1;
        }
    }
    for(int i= st+1; i<s.size(); i++){
        cout<<s[i];
    }
    cout<<endl;
    return 0 ;
}