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
		long long int D;
		cin>>D;
		long long int i=0;
		long long int A[N];
		forward(i,N)
			cin>>A[i];

		queue<long long int> q;
		long long int qSum=0;
		long long int start=1;
		long long int end=0;
		bool flag=false;
		for(i=0;i<N;i++)
		{
			q.push(A[i]);
			qSum+=A[i];
			end++;
			while(qSum>D)
			{
				qSum-=q.front();
				start++;
				q.pop();
			}
	
			if(qSum==D)
			{
				flag=true;
				break;
			}
		}
		while(qSum>D)
		{
			qSum-=q.front();
			start++;
			q.pop();
			// cout<<qSum<<"->";
		}

			if(qSum==D)
			{
				flag=true;
			}

		if(flag)
		{
			cout<<start<<sp<<end<<nl;
		}
		else
			cout<<-1<<nl;

	}
}
