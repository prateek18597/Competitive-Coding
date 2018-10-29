#include<bits/stdc++.h>
using namespace std;


int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		long long int N,K;
		cin>>N>>K;
		long long int A[K];
		for(int j=0;j<K;j++)
		{
			A[j]=j+1;
		}
		if(K*(K+1)>2*N)
		{
			cout<<-1<<endl;
		}
		else
		{
			long long int sum=K*(K+1)/2;
			long long int X=N-sum;
			long long int R=X/K;
			long long int q=X%K;
			for(int j=0;j<K;j++)
			{
				A[j]+=R;
			}
			for(int j=0;j<q;j++)
			{
				A[K-j-1]++;
			}
			long long int temp=(((A[0])*((A[0]-1)))%1000000007);
			for(int j=1;j<K;j++)
			{
				temp=((temp%1000000007)*(((A[j])*((A[j]-1)))%1000000007))%1000000007;
			}
			cout<<temp<<endl;
		}
		
	}
	return 0;
}