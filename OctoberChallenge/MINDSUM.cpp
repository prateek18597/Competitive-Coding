#include<bits/stdc++.h>
using namespace std;


int sumDigits(long long int no) 
{ 
   return no == 0 ? 0 : no%10 + sumDigits(no/10) ; 
} 

int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		long long int N,D;
		cin>>N>>D;
		long long int minNum=10,minCount=0;
		for(int j=0;j<10;j++)
		{
			long long int count=j;
			long long int number=0;
			long long int flag=N+j*D;
			while(true)
			{
				if(flag<=9)
				{
					number=flag;
					break;
				}
				count++;
				flag=sumDigits(flag);
				
			}
			if(number==1)
			{
				minNum=1;
				minCount=count;
				break;
			}
			else
			{
				if(number<minNum)
				{
					minNum=number;
					minCount=count;
				}	
			}
		}
		cout<<minNum<<" "<<minCount<<endl;
	}
	return 0;
}