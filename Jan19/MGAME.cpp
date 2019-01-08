#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int T;
	cin>>T;
	while(T--)
	{
		long long int N,P;
		cin>>N>>P;
		long long int K=floor(N/2)+1;
		while(K>P)
		{
			K=floor(K/2)+1;
		}
		long long int R=N%K;
		long long int count=(P-R)*(P-R);	
		// if(N>=P)
		// {
			cout<<count<<endl;
		// }
		// else
		// {
			// count+=(P-N)*(N-K)*(P-K+1)+(P-N)*(P-N)*(N-K);
			// cout<<count<<endl;
		// }	
		
	}
}