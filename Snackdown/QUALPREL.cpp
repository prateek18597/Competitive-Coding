#include <bits/stdc++.h> 
using namespace std;

int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		int N,K;
		cin>>N>>K;
		long long int S[N];
		for(int j=0;j<N;j++)
		{
			cin>>S[j];
		}
		sort(S,S+N, greater<int>());
		int count=0;
		for(int j=0;j<K;j++)
		{
			count++;
			while(S[j]==S[j+1])
			{
				count++;
				j++;
			}
		}
		cout<<count<<endl;
	}
}