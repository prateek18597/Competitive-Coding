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
		long long int m,n,x;
		cin>>m>>n>>x;
		long long int i=0;
		long long int A[n+1][x+1]={0};
		
		for(i=0;i<=m && i<=x;i++)
		{
			A[1][i]=1;
		}

		for(i=2;i<=n;i++)
		{
			for(long long int j=1;j<=x;j++)
			{
				for(long long int k=1;k<=m && k<j;k++)
				{
					A[i][j]+=A[i-1][j-k];
				}
			}
		}

		cout<<A[n][x]<<nl;

	}
}
