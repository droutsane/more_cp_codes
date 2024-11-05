#include<bits/stdc++.h>
using namespace std;
int main(){
    long long sum = 0;
    long long n;
    cin>>n;
    long long a = n;
    n--;
    while(n--){
        long long x;
        cin>>x;
        sum+=x;
    }
    long long exps = a*(a+1)/2;
    cout<<exps-sum;
    return 0;
}