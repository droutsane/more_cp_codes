#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int ans=1;
    int l=0, r=1;
    while(r<=s.size()){
        if(s[r-1]==s[r]){
            int temp = r-l+1;
            ans = max(temp, ans);
            r++;
        }else{
            l=r;
            r++;
        }
    }
    cout<<ans;
    return 0;
}