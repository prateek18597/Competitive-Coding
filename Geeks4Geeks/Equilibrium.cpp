#include<bits/stdc++.h>
using namespace std;
#define forward(i,n) for(;i<n;i++)
#define reverse(i,n) for(i=n-1;i>=0;i--)
#define nl "\n"
#define sp " "
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	long long int T;
	cin>>T;
	while(T--)
	{
		ll N;
		cin>>N;
		ll i=0;
		ll A[N];
		ll left[N],right[N];
		ll sum=0;
		forward(i,N)
		{
			cin>>A[i];
			sum+=A[i];
		}

		ll start=0;
		i=0;
		ll flag=-1;
		forward(i,N)
		{
			left[i]=start;
			right[i]=sum-A[i]-start;
			start+=A[i];
			if(left[i]==right[i])
			{
				flag=i;
				break;
			}
		}
		cout<<flag==0?-1:flag+1<<nl;
	}
}