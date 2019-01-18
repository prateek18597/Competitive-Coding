#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long int N;
		cin>>N;
		long long int A[N];
		for(long long int i=0;i<N;i++)
		{
			cin>>A[i];
		}

		long long int M;
		cin>>M;

		sort(A,A+N);

		long long int min=INT_MAX;
		
		for(long long int i=0;i<N-M+1;i++)
		{	
			if((A[i+M-1]-A[i])<min)
			{
				min=A[i+M-1]-A[i];
			}
		}
		cout<<min<<endl;
	}	
	return 0;
}