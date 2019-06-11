#include<bits/stdc++.h>
using namespace std;

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
		string A[N+1];
		map<int,int> m;

		for(i=1;i<=N;i++)
		{
			cin>>A[i];
		}
		for(int j=0;A[1][j];j++)
		{
			int c=(int)(A[1][j])-97;
			m[c]=1;
		}
		for(i=2;i<=N;i++)
		{
			for(int j=0;A[i][j];j++)
			{
				int c=(int)(A[i][j])-97;
				if(m[c]==(i-1))
					m[c]=i;
			}
		}

		long long int count=0;
		for(i=0;i<26;i++)
		{
			if(m[i]==N)
				count++;
		}
		cout<<count<<nl;

	}
}
