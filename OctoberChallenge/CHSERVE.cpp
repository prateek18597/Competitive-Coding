#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int T;
	cin>>T;
	for(long int i=0;i<T;i++)
	{
		long long int P1,P2,K;
		cin>>P1>>P2>>K;
		if((P1+P2)%(2*K)<K)
		{
			cout<<"CHEF"<<endl;
		}
		else
		{
			cout<<"COOK"<<endl;
		}
	}
	return 0;
}