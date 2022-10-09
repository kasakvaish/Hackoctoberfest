#include<bits/stdc++.h>
using namespace std;
int fib(int n){
	int prev2=0;
	int prev=1;
	int curi=0;
	for(int i=2;i<=n;i++){
		curi=prev+prev2;
		prev2=prev;
		prev=curi;
	}
	return prev;
}
int main()
{
	int n;cin>>n;
	cout<<fib(n);
	return 0;
}