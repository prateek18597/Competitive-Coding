#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long int N;
		cin>>N;
		long long int Odd[N];
		long long int odd=0,even=0;
		long long int Even[N];
		for(long long int i=0;i<N;i++)
		{
			long long int temp;
			cin>>temp;
			if(temp%2==0)
			{
				Even[even++]=temp;
			}
			else
			{
				Odd[odd++]=temp;
			}
		}

		sort(Even,Even+even);
		sort(Odd,Odd+odd,greater<long long int>());
		
		for(long long int i=0;i<odd;i++)
		{
			cout<<Odd[i]<<" ";
		}

		for(long long int i=0;i<even;i++)
		{
			cout<<Even[i]<<" ";
		}
		cout<<endl;

	}
	return 0;
}