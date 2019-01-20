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
		long long int N;
		cin>>N;
		long long int i=0;
		long long int A[N];
		long long int max=INT_MIN;
		forward(i,N)
		{
			cin>>A[i];
			if(A[i]>max)
			{
				max=A[i];
			}
		}
		long long int countInc=0,countDec=0;
		for(i=0;i<N-1;i++)
		{
			if(A[i+1]>A[i])
				countInc++;
			else
				countDec++;
		}
		long long int ans=1;
		if(countInc==0)
		{
			ans=2;
		}
		else
		{
			if(countInc==1)
			{
				ans=3;
			}
			else
			{
				if(countDec==0)
				{
					ans=1;
				}
				else
				{
					ans=4;
				}
			}
		}
		cout<<max<<sp<<ans<<nl;

	}
}
