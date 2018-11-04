#include<bits/stdc++.h>
using namespace std;

long long int XOR(long long int num1,long long int num2) 
{ 
   return (num1 | num2) & (~num1 | ~num2); 
}

struct Query
	{
		long long int K=0;
		long long int *A;
	};

int main()
{
	long long int N,Q;
	cin>>N>>Q;
	
	long long int k=0;
	long long int A[N],C[N];
	// Query q;
	// q.A=new long long int[N];

	for(long long int i=0;i<N;i++)
	{
		long long int temp;
		cin>>temp;
		C[i]=temp;
		A[i]=temp;
	}
	
	for(long long int i=0;i<Q;i++)
	{
		long long int K,X;
		cin>>K>>X;
		X--;
		if(k<=K)
		{
			for(long long int i=k+1;i<=K;i++)
			{
				for(long long int j=0;j<N-1;j++)
				{
					A[j]=XOR(A[j],A[j+1]);
				}
				// t.A[N-1]=qA[N-1];
				k=i;
				// q=t;
			}

			cout<<A[X]<<endl;
		}
		else
		{
			for(long long int i=0;i<N;i++)
			{
				A[i]=C[i];
			}
			for(long long int i=1;i<=K;i++)
			{
				for(long long int j=0;j<N-1;j++)
				{
					A[j]=XOR(A[j],A[j+1]);
				}
				A[N-1]=C[N-1];
				k=i;
			}

			cout<<A[X]<<endl;
		}
		
		
	}
	return 0;
}