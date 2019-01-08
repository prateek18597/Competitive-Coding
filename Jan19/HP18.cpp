#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		long long int N,a,b;
		long long int countBob=0,countAlice=0,countBoth=0;
		cin>>N>>a>>b;
		long long int A[N];
		for(long long int j=0;j<N;j++)
		{
			cin>>A[j];
			if(A[j]%a==0)
			{
				countBob++;
			}
			if(A[j]%b==0)
			{
				countAlice++;
			}
			if(A[j]%b==0 && A[j]%a==0)
			{
				countBoth++;
				countBob--;
				countAlice--;
			}
		}
		if(b%a==0)
		{
			cout<<"BOB"<<endl;
		}
		else
		{
			if(countBob>countAlice)
			{
				cout<<"BOB"<<endl;
			}
			else
			{
				if(countBob==countAlice && countBoth!=0)
				{
					cout<<"BOB"<<endl;
				}
				else
				{
					cout<<"ALICE"<<endl;	
				}
			}
		}
	}
}