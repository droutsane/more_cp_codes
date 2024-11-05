#include <iostream>

#define ll long long
using namespace std;

int main(){
    ll N;
    cin>>N;
    for( ll n=1; n<= N; ++n){
        ll totalPositions = (n*n) * (n*n-1)/2;
        ll attackPosition = 4*(n-1)*(n-2);
        cout<<totalPositions - attackPosition<<endl;
    }
    return 0;
}