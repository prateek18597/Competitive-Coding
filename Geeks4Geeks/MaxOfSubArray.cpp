#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		ll N,K;
		cin>>N>>K;
		ll A[N];
		for(ll i=0;i<N;i++)
		{
			cin>>A[i];
		}

		pair<ll,ll> max;
		max.first=0;
		max.second=INT_MIN;
		
		for(ll i=0;i<K;i++)
		{
			if(A[i]>=max.second)
			{
				max.first=i;
				max.second=A[i];
			}
		}

		cout<<max.second<<" ";

		for(ll i=K;i<N;i++)
		{
			if(max.first>i-K)
			{
				if(A[i]>=max.second)
				{
					max.first=i;
					max.second=A[i];
				}
			}
			else
			{
				max.first=-1;
				max.second=INT_MIN;
				for(ll j=i-K+1;j<=i;j++)
				{
					if(A[j]>=max.second)
					{
						max.second=A[j];
						max.first=j;
					}
				}	
			}
			cout<<max.second<<" ";
		}
		cout<<endl;
	}
	return 0;
}