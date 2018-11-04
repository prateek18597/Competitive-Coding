#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int T;
	cin>>T;
	long long int x[26]={0};
	long long int y[26]={0};
	x[1]=1;
	x[2]=1;
	y[1]=2;
	y[2]=4;
	for(int i=0;i<T;i++)
	{
		int n;
		cin>>n;
		if(x[n]==0 && y[n]==0)
		{
			for(int j=3;j<=n;j++)
			{
				if(x[j]==0 && y[j]==0)
				{
					x[j]=x[j-2]*y[j-1]+y[j-2]*x[j-1];
					y[j]=2*y[j-1]*y[j-2];
					while(x[j]%2==0 && y[j]%2==0)
					{
						x[j]=x[j]/2;
						y[j]/=2;
					}
				}
			}
		}
		cout<<x[n]<<" "<<y[n]<<" ";
	}
	return 0;
}