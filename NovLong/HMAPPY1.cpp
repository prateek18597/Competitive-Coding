#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int N,Q,K;
	cin>>N>>Q>>K;
	int A[N];
	long long int max=0;
	long long int largest=max;
	cin>>A[0];
	if(A[0]==0)
	{
		max=0;
	}
	else
	{
		max=1;
		if(max>largest)
		{
			largest=max;
		}
	}
	for(long long int i=1;i<N;i++)
	{
		cin>>A[i];
		if(A[i]==0)
		{
			max=0;
		}
		else
		{
			max++;
			if(max>largest)
			{
				largest=max;
				if(largest>=K)
				{
					largest=K;
					break;
				}
			}
		}
	}
	string s;
	cin>>s;
	long long int count=0;
	for(long long int i=0;i<Q;)	
	{
		if(s[i]=='?')
		{
			while(s[i]=='?')
			{
				if(largest<=K)
				cout<<largest<<endl;
				else
				cout<<K<<endl;
				i++;
			}
		}
		else
		{
			largest=0;
			max=0;
			
			while(s[i]=='!')
			{
				count++;
				i++;
			}
			
			long long int co=count%N;
			for(long long int j=0;j<=co-1;j++)
			{
				if(A[N-co+j]==0)
				{
					max=0;
				}
				else
				{
					max++;
					if(max>largest)
					{
						largest=max;
						if(largest>=K)
						{
							largest=K;
							break;
						}
					}
				}
			}

			if(largest<K)
			{
				for(long long int j=0;j<=N-1-co;j++)
				{
					if(A[j]==0)
					{
						max=0;
					}
					else
					{
						max++;
						if(max>largest)
						{
							largest=max;
							if(largest>=K)
							{
								largest=K;
								break;
							}
						}
					}
				}			
			}
		}
	}
	return 0;
}