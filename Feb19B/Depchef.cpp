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

		long long int A[N];
		for(i=0;i<N;i++)
		{
			cin>>A[i];
		}
		
		long long int D[N];
		for(i=0;i<N;i++)
		{
			cin>>D[i];
		}
		long long int defence=-1,index=-1;
		// Check for start and last.
		
		if(A[N-1]+A[1]<D[0]){
			defence=D[0];
			index=0;
		}

		if(A[N-2]+A[0]<D[N-1])
		{
			if(D[N-1]>defence)
			{
				defence=D[N-1];
				index=N-1;	
			}	
		}

		// Check for middle values.

		for(i=1;i<N-1;i++)
		{
			if(A[i-1]+A[i+1]<D[i])
			{
				if(D[i]>defence)
				{
					defence=D[i];
					index=i;	
				}	
			}
		}

		cout<<defence<<nl;
	}
}
