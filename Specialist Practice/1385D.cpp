#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
typedef long long ll;
char ar[140000];

//min heap 
//priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
//max heap
//priority_queue<int> pq;
int getCost(int L , int R , char ch)
{
	int cnt = 0;
	for(int i=L;i<=R;i++)
	if(ar[i] != ch) cnt++;
	
	return cnt;
}

int getMin(int L , int R , char ch)
{
	if(L == R)
	{
		if(ar[L] == ch) return 0;
		else			return 1;
	}
	
	int mid = (L + R) / 2;
	
	return min(getCost(L , mid , ch) + getMin(mid + 1 , R , ch+1) ,
	 
				getCost(mid + 1 , R , ch) + getMin(L , mid , ch+1));
}


int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>ar[i];
        }
        cout<<getMin(0,n-1, 'a')<<endl;
    }
}