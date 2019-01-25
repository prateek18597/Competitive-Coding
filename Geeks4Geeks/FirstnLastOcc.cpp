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
		forward(i,N)
			cin>>A[i];
		long long int K;
		cin>>K;

		long long int count=0,end=-1;
		for(long long int i=0;i<N;i++)
		{
			if(A[i]==K)
			{
				end=i;
				count++;
			}
		}
		if(end!=-1)
		{
			cout<<end-count+1<<sp<<end<<nl;
		}
		else
			cout<<-1<<nl;
	}
}
