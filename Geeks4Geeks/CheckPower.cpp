#include<bits/stdc++.h>
using namespace std;
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
		long long int X,Y;		
		cin>>X>>Y;
		double a=log(Y)/log(X);
		if(Y==1)
			cout<<1<<nl;
		else if(X==1)
			cout<<0<<nl;
			else
			cout<<(ceil(a)==floor(a))<<endl;
	}
}
