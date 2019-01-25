#include<bits/stdc++.h>
using namespace std;
#define forward(i,n) for(;i<n;i++)
#define reverse(i,n) for(i=n-1;i>=0;i--)
#define nl "\n"
#define sp " "

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	long long int T;
	cin>>T;
	while(T--)
	{
		double N,M,H;
		cin>>N>>M;
		if(N==12)
			N=0;
		if(M==60)
			M=0;

		double h,m;
		h=N*30+M*0.5;
		m=M*6;
		cout<<floor(min(abs(h-m),360-abs(h-m)))<<nl;
	}
}
