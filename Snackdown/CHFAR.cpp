#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		int N,K;
		cin>>N>>K;
		int count1=0,count=0;
		for(int j=0;j<N;j++)
		{
			int temp;
			cin>>temp;
			if(temp==1)
			{
				count1++;
			}
			else
			{
				count++;
			}
		}
		if(count<=K)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}