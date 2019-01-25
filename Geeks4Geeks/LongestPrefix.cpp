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
		string A[N];
		long long int minL=INT_MAX;
		forward(i,N)
		{
			cin>>A[i];
			if(minL>A[i].length())
				minL=A[i].length();
		}
		bool flag=false;
		for(i=0;i<minL;i++)
		{
			for(long long int j=0;j<N-1;j++)
			{
				if(A[j][i]!=A[j+1][i]){
					flag=false;
					break;
				}
				else
					flag=true;
			}
			if(flag==false)
				break;
		}
		if(N!=1)
		{
			if(i==0)
				cout<<-1<<nl;
			else
				cout<<A[0].substr(0,i)<<nl;
		}
		else
		{
			cout<<A[0]<<nl;
		}
		
	}
}
