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
		long long int i=0;
		long long int A[N];
		long long int max=INT_MIN;
		long long int min=INT_MAX;
		
		forward(i,N){
			cin>>A[i];
			if(A[i]>max)
				max=A[i];
			if(A[i]<min)
				min=A[i];
		
		}

		long long int temp=min+(N-1)*(min-1);
		if(temp>max)
			cout<<temp<<nl;
		else
			cout<<max<<nl;

	}
}
