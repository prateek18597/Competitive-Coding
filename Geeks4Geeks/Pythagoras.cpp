#include<bits/stdc++.h>
using namespace std;

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
		long long int A[N];
		map<long long int,long long int> m;
		for(long long int i=0;i<N;i++)
		{
			cin>>A[i];
			A[i]*=A[i];
			m[A[i]]=1;
		}
		bool flag=false;
		sort(A,A+N);
		for(long long int i=N-1;i>=0;i--)
		{
			for(long long int j=0;j<i;j++)
			{
				if(m[A[i]-A[j]]==1)
				{
					flag=true;
					break;
				}
			}
			if(flag)
				break;
		}
		cout<<(flag?"Yes":"No")<<endl;

	}
}