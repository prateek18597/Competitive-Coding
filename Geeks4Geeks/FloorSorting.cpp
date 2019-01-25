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
		long long int K;
		cin>>K;
		long long int i=0;
		long long int A[N];
		forward(i,N)
			cin>>A[i];

		long long int lower=0;
		long long int upper=N-1;
		bool flag=false;
		while(lower<=upper)
		{
			long long int mid=(lower+upper)/2;
			if(A[mid]<K)
			{
				lower=mid+1;
			}
			else if(A[mid]>K)
			{
				upper=mid-1;
			}
			else
			{
				flag=true;
				lower=mid;
				break;
			}
		}
		if(A[0]>K)
		{
			cout<<-1<<nl;
		}
		else
		{
			if(flag)
			cout<<lower<<nl;
			else if(lower>0)
				cout<<lower-1<<nl;
			else
				cout<<lower<<nl;
		}
	}
}
