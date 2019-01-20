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

		long long int count[N];
		// long long int prev[N];
		long long int maxCount=0;
		// long long int maxIndex=-1;
		
		for(i=0;i<N;i++)
		{
			count[i]=A[i];
			// prev[i]=-1;
			for(long long int j=0;j<i;j++)
			{
				if(A[j]<A[i] && count[i]<count[j]+A[i])
				{
					count[i]=count[j]+A[i];
					// prev[i]=j;
				}
			}
			if(count[i]>maxCount)
			{
				maxCount=count[i];
				// maxIndex=i;
			}
		}
		string o="";
		// while(maxIndex!=-1)
		// {
			// o=to_string(A[maxIndex])+sp+o;
			// maxIndex=prev[maxIndex];
		// }
		cout<<maxCount<<nl;

	}
}
