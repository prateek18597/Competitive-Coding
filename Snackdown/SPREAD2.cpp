#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		int N;
		cin>>N;

		long long int A[N];
		long long int S[N];
		for(int j=0;j<N;j++)
		{
			cin>>A[j];
			if(j==0)
			{
				S[0]=A[0];
			}
			else
			{
				S[j]=A[j]+S[j-1];
			}
		}
		long long int informers=S[0];
		int days=0;
		for(long long int informed=1;informed<N;)
		{
			informed+=informers;
			days++;
			if(informed<N)
			{
				informers=S[informed-1];	
			}
			else
			{
				break;	
			}
		}
			cout<<days<<endl;	
	}
	return 0;
}