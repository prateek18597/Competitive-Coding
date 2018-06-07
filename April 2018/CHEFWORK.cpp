#include<iostream>
using namespace std;
#include<math.h>
#include<algorithm>
int main()
{
	int N;
	cin>>N;
	long int c[N];
	long int t[N];
	// long int t2[N];
	// long int c[N];
	for(int i=0;i<N;i++)
	{
		cin>>c[i];
	}
	long int p1=100001,p2=100001,p3=100001;

	for(int i=0;i<N;i++)
	{
		cin>>t[i];
		if(t[i]==1)
		{
			if(p1>c[i])
				p1=c[i];
			// t1[p1++]=t[i];
		}
		else
		{
			if(t[i]==2)
			{
				if(p2>c[i])
				p2=c[i];
			}
			else
			{
				if(p3>c[i])
				p3=c[i];
			}
		}
	}
	if(p1+p2<p3)
	{
		cout<<(p1+p2)<<endl;
	}
	else
		cout<<p3<<endl;
	return 0;
}