#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int T;
	cin>>T;
	while(T--)
	{
		long long int N,P;
		
		cin>>N>>P;
		
		long long int K=floor(N/2)+1;
		
		long long int R=N%K;

		if(N==1 || N==2)
		{
			cout<<P*P*P<<endl;
		}
		else
		{
			if(N==P)
			{
				cout<<(P-R)*(P-R)<<endl;
			}
			else
			{
				cout<<(P-R)*(P-R)+(P-R)*(P-N)*(P-N)<<endl;
			}
		}
	}
}