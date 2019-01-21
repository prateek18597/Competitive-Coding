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
		long long int N1,N2;
		
		cin>>N1;
		long long int A1[N1];
		for(long long int i=0;i<N1;i++)
		{
			cin>>A1[i];
		}

		cin>>N2;
		long long int A2[N2];
		for(long long int i=0;i<N2;i++)
		{
			cin>>A2[i];
		}

		long long int A[N2]={0};
		long long int temp;
		long long int max=0;

		for(long long int i=0;i<N1;i++)
		{
			temp=0;
			for(long long int j=0;j<N2;j++)
			{
				if(A1[i]==A2[j] && temp+1>A[j])
				{
					A[j]=temp+1;
					if(A[j]>max)
					{
						max=A[j];
					}
				}
				else if(A1[i]>A2[j] && A[j]>temp)
				{
					temp=A[j];
				}
			}

		}
		cout<<max<<nl;

	}
}
