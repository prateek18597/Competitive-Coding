#include<iostream>
using namespace std;
#include<math.h>

int main()
{
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		int n;
		cin>>n;
		bool b=false;

		for(int j=2;j<=sqrt(n);j++)
		{
			if(n%j==0)
				b=true;
		}
	
	if(b)
	{
		int y=(int)floor(sqrt(n));
		int x=n/y;
		for(int j=0;j<x;j++)
			{
				cout<<"X";
			}
			for(int j=0;j<y;j++)
			{
				cout<<"D";
			}

	}
	else
		{
			cout<<"XD";
			if(n>=3)
				{
					cout<<"X";
				}
			for(int j=0;j<floor(n/2);j++)
			{
				
				cout<<"D";
			}	
		}
		cout<<endl;
}
}