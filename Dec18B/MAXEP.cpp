#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int upper,c;
	cin>>upper>>c;
	long long int lower=1;
	long long int cash=1000;
	long long int y=300;
	while(cash)
	{
		cout<<1<<" "<<y<<endl;
		int temp;
		cash--;
		cin>>temp;
		if(temp)
		{
			cout<<2<<endl;
			cash-=c;
			for(int i=y-299;i<=y && cash;i++)
			{
				cout<<1<<" "<<i<<endl;
				cin>>temp;
				if(temp)
				{
					y=i;
					cash=0;
					break;
				}
				else
				{
					cash--;
				}

			}
			
		}
		else
		{
			// if(temp==0)
				y+=300;
			if(y>upper)
			{
				for(int i=y-299;i<=upper && cash;i++)
				{
					cout<<1<<" "<<i<<endl;
					cin>>temp;
					if(temp)
					{
						y=i;
						cash=0;
						break;
					}
					else
					{
						cash--;
					}

				}
			}	
		}
	}
	cout<<3<<" "<<y<<endl;
	return 0;
}