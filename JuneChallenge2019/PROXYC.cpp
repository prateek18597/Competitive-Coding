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
		double n=N*1.0;
		string s;
		cin>>s;
		double count=0.0;
		for(int j=0;j<N;j++)
		{
			if(s[j]=='P')
			{
				count=count+1.0;
			}
		}


		int changes=0;
		int i=2;
		while(count/n<0.75 && i<N-2)
		{
			if(s[i]=='A' && (s[i-2]=='P' || s[i-1]=='P') && (s[i+2]=='P' || s[i+1]=='P'))
			{
				changes++;
				count+=1.0;
			}
			i++;
		}
		if(count/n>=0.75)
			cout<<changes<<nl;
		else
			cout<<-1<<nl;
	}
}