#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int N,M;
	cin>>N>>M;
	
	long long int A[N],B[M];
	long long int A_index=0,B_index=0;
	long long int minA=INT_MAX,maxB=INT_MIN;
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
		if(A[i]<minA)
		{
			minA=A[i];
			A_index=i;
		}
	}
	
	for(int i=0;i<M;i++)
	{
		cin>>B[i];
		if(B[i]>maxB)
		{
			maxB=B[i];
			B_index=i;
		}
	}

	for(int i=0;i<M;i++)
	{
		cout<<A_index<<" "<<i<<endl;
	}
	for(int i=0;i<N;i++)
	{
		if(i!=A_index)
		{
			cout<<i<<" "<<B_index<<endl;
		}
	}
	

	

	return 0;
}