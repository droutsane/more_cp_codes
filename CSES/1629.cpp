#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int>&a, pair<int,int>&b){
    return(a.second<b.second);
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>intervals(n);
    for(int i=0;i<n; i++){
        cin>>intervals[i].first>>intervals[i].second;
    }
    sort(intervals.begin(), intervals.end(), cmp);
    int i=0;
    int endofLastMovide = -1;
    int movies = 0;
    while(i<n){
        if(intervals[i].first >= endofLastMovide){
            movies++;
            endofLastMovide=intervals[i].second;
            i++;
        }else{
            i++;
        }
    }
    cout<<movies;
}