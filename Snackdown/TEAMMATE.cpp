#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		long long int N;
		cin>>N;
		long long int S[N];
		for(int j=0;j<N;j++)
		{
			cin>>S[j];
		}		
		sort(S,S+N,greater<int>());
		
	}	
}