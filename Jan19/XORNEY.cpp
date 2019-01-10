#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		unsigned long long int L,R;
		scanf("%llu",&L);
		scanf("%llu",&R);

		unsigned long long int gap=R-L+1;

		if(gap%2==0)
		{
			gap/=2;
			if(gap%2==0)
			{
				printf("Even\n");
			}
			else
			{
				printf("Odd\n");
			}
		}
		else
		{
			if(L%2==0)
			{
				printf("Even\n");
			}
			else
			{
				printf("Odd\n");
			}
		}
	}
	return 0;
}