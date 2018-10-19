#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		long long int bit=1,byte=0,nibble=0;
		long int N;
		cin>>N;
		for(int j=2;j<N;j+=2)
		{
			if(j%26==0)
			{
				bit+=2*byte;
				byte=0;
			}
			
			else
			{
				if(j%26==10)
				{
					byte+=nibble;
					nibble=0;
				}
				else
				{
					if(j%26==2)
					{
						nibble+=bit;
						bit=0;
					}
				}
			}
		}
		cout<<bit<<" "<<nibble<<" "<<byte<<endl;
	}
	return 0;
}