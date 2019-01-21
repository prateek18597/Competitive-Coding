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
		string s1,s2;
		cin>>s1>>s2;
		long long int n1=s1.length();
		long long int n2=s2.length();

		long long int A[n1+1][n2+1]={0};
		for(long long int i=0;i<=n1;i++)
		{
			for(long long int j=0;j<=n2;j++)
			{
				if(i==0 || j==0)
				{
					A[i][j]=0;
				}
				else
				{
					if(s1[i-1]==s2[j-1])
					{
						A[i][j]=1+A[i-1][j-1];
					}
					else
					{
						A[i][j]=max(A[i-1][j],A[i][j-1]);
					}
				}
			}
		}
		cout<<A[n1][n2]<<nl;

	}
}
