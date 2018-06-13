#include<iostream>
using namespace std;
#include<cmath>

int getNumofPrime(int num)
{
	int count=0;
	
	while(num%2==0)
	{
		count=1;
		num=num/2;
	}
	for(int i=3;i<sqrt(num);i=i+2)
	{
		bool b=false;
		while(num%i==0)
		{
			num/=i;
			b=true;
		}
		if(b)
		count++;
	}
	if(num>2)
		count++;
	return count;	
}

int main()
{
	int T;
	cin>>T;
	int x[1000001]={0};
	for(int i=0;i<T;i++)
	{
		int n,m;
		cin>>n>>m;
		int count=0;

		for(int j=n;j<m;j++)
		{
			if(x[j]==0)
				x[j]=getNumofPrime(j);
			count+=x[j];
		}
		cout<<count<<endl;
	}

	return 0;
}