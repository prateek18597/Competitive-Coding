#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		long long int N,M,L,K;
		cin>>N>>M>>K>>L;
		long long int A[N];
		for(int j=0;j<N;j++)
		{
			cin>>A[j];
		}
		sort(A,A+N);

		int enter=0;
		long long int min=INT_MAX;
		long long int pos=0;
		long long int m=M;
		for(long long int j=1;j<=K;)
		{
			if(j%L==0)
			{
				M--;
			}
			
			long long int time=(M+1)*L-j%L;
			
			if(time<min)
			{
				min=time;
				pos=j;
			}

			if(enter<N && j==A[enter])
			{
				M++;
				enter++;
			}
			
			if(A[enter]<j+L-j%L)
				j=A[enter];
			else
				if(K<j+L-j%L)
				{
						j=K;
						time=(M+1)*L-j%L;		
						break;
				}
			
				else
				j+=L-j%L;			

		}
		if(min<0)
			min*=-1;
		cout<<min<<endl;
	}
	return 0;
}