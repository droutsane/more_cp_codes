#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    vector<int>v1 = {-3, 4, 2};
    vector<int>v2 = {1, -4, 11};
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), greater<int>());
    int dot = 0;
    for(int i=0;i<3; i++){
        dot += v1[i]*v2[i];
    }
    cout<<dot;
    return 0;
}
