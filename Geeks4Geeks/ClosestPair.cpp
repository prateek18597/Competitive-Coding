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
		long long int N,M;
		cin>>N>>M;
		long long int i=0;
		long long int A[N];
		long long int B[M];
		
		forward(i,N)
			cin>>A[i];

		i=0;
		forward(i,M)
			cin>>B[i];

		sort(A,A+N);
		sort(B,B+M,greater<long long int>());

		long long int K;
		cin>>K;

		long long int gap=0;
		long long minGap=INT_MAX;
		long long int x,y;
		long long int j=0;
		i=0;
		while(i<N && j<M)
		{
			gap=A[i]+B[j]-K;
			if(gap>0)
			{
				if(abs(gap)<minGap)
				{
					minGap=abs(gap);
					x=i;
					y=j;
				}
				j++;

			}
			else
			{
				if(gap<0)
				{
					if(abs(gap)<minGap)
					{
						minGap=abs(gap);
						x=i;
						y=j;
					}
					i++;
				}
				else
				{
					if(abs(gap)<minGap)
					{
						minGap=abs(gap);
						x=i;
						y=j;
					}
					break;
				}
			}
		}
		cout<<A[x]<<sp<<B[y]<<nl;
	}
}
