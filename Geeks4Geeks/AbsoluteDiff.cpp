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
		long long int N,K;
		cin>>N>>K;
		long long int i=0;
		long long int A[N];
		long long int n=0;
		forward(i,N)
		{
			long long int t;
			cin>>t;
			if(t<K)
			{
				A[n]=t;
				n++;
			}
		}
		long long int count=-1;
		for(i=0;i<n;i++)
		{
			string st=to_string(A[i]);
			long long int l=st.length();
			bool flag=false;
			
			for(long long int j=0;j<l-1;j++)
			{
				if((st[j]-st[j+1])==1 || (st[j]-st[j+1])==-1)
				{
					flag=true;
				}
				else
				{
					flag=false;
					break;
				}
			}
			if(flag)
			{
				cout<<A[i]<<sp;
				count=1;
			}
		}
		if(count==-1)
			cout<<-1;
		cout<<nl;

	}
}
