#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int T;
	cin>>T;
	while(T--)
	{
		long long int N,K;
		cin>>N>>K;
		long long int A[N];
		for(long long int i=0;i<N;i++)
		{
			cin>>A[i];
		}

		long long int lower=0;
		long long int upper=N-1;

		long long int mid=(lower+upper)/2;

		long long int flag=-1;

		while(lower<=upper)
		{
			if(A[mid]<K)
			{
				lower=mid+1;
				mid=(lower+upper)/2;
			}
			else
			{
				if(A[mid]>K)
				{
					upper=mid-1;
					mid=(lower+upper)/2;
				}
				else
				{
					flag=mid;
					break;
				}
			}
		}

		if(A[mid]<K)
		{

			if(mid<N-1)
			{
				if(K-A[mid]<A[mid+1]-K)
				{
					cout<<A[mid]<<endl;
				}
				else
				{
					cout<<A[mid+1]<<endl;	
				}	
			}
			else
			{
				cout<<A[mid]<<endl;
			}
			
		}
		else
		{
			if(A[mid]==K)
			{
				cout<<A[mid]<<endl;
			}
			else
			{
				if(mid>1)
				{
					if(K-A[mid-1]<A[mid]-K)
					{
						cout<<A[mid-1]<<endl;
					}
					else
					{
						cout<<A[mid]<<endl;	
					}	
				}
				else
				{
					cout<<A[mid]<<endl;
				}
			}
		}

	}
}