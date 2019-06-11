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
		long long int N;
		cin>>N;
		long long int i=0;
		long long int A,B,K;
		cin>>A>>B>>K;
		long long int countA=N/A;
		long long int countB=N/B;
		long long int count=countB*__gcd(A,B)/A;
		countA-=count;
		countB-=count;
		if(countA+countB>=K)
		{
			cout<<"Win"<<nl;
		}
		else
			cout<<"Lose"<<nl;	
	}
}
