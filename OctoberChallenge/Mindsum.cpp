#include<bits/stdc++.h>
using namespace std;

struct answer
{
	long long int number;
	long long int count;
};

answer sumDigits(long long int no,int minC,long int counter) 
{ 
	if(no<=9)
	{
		if(no<minC)
		{
			minC=no;
			counter=counter;
		}
		else
		{
			if(no==minC)
			{
				answer ans;
				ans.number=minC;
				ans.count=counter;
				return ans;
			}
		}
	}
	return no == 0 ? 0 : no%10 + sumDigits(no/10) ; 	
	
   
}

answer nplusd(long long int no,int minC,long int counter)
{

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