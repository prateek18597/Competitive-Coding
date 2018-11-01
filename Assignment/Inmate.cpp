#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int T;
	cin>>T;
	for(long long int k=0;k<T;k++)
	{
		long long int N;
		long long int C;
		cin>>N>>C;
		long long int A[N];
		long long int B[N];
		for(long long int i=0;i<N;i++)
		{
			cin>>A[i];
		}
		sort(A,A+N);
		for(long long int i=0;i<N;i++)
		{
			B[i]=A[i]-A[0];
		}
		long long int max=0;
		long long int ii=1;
		for(long long int i=B[1];i<=B[N-1];i=B[ii])
		{
			ii++;
			long long int last=0;
			bool flag=false;
			for(long long int c=1;c<C;c++)
			{
				if(last<N && !flag)
				{
					for(long long int j=last;j<N;j++)
					{
						if(B[j]-B[last]>=i)
						{
							last=j;
							break;
						}
						if(j==N-1 && c<C)
						{
							flag=true;
							break;
						}
					}
				}
				else
				{
					flag=true;
					break;
				}
			}
			if(flag==false)
				max=i;
			else
				break;
		}
		cout<<max<<endl;
	}
		
	return 0;
}