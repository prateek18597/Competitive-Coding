#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	long long int A[N][N];
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cin>>A[i][j];
		}
	}
	long long int D[N][N];
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			D[i][j]=A[i][j];
			long long int max=0;
			if(i>0 && j>0)
			{
				max=D[i][j-1];
				if(D[i-1][j]<D[i][j-1])
					max=D[i-1][j];
			}
			else
			{
				if(i>0)
				{
					max=D[i-1][j];
				}
				else
				{
					if(j>0)
						max=D[i][j-1];
				}
			}
			D[i][j]+=max;
		}
	}
	cout<<D[N-1][N-1];
	return 0;
}