#include<bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int main(){
    int n;
    cin>>n;
    vector<int>songs(n);
    for(int i=0;i<n; i++){
        cin>>songs[i];
    }
    set<int>heard;
    int j=0;
    int i=0;
    int successivessongs = 0;
    while(i<n && j<n){
        while(j<n && !heard.count(songs[j])){
            heard.insert(songs[j]);
            successivessongs = max(successivessongs, j-i+1);
            j++;
        }
        while(j<n && heard.count(songs[j])){
            heard.erase(songs[i]);
            i++;
        }
    }
    cout<<successivessongs;
}