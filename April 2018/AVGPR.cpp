#include<iostream>
using namespace std;

int main()
{
	int N;
	cin>>N;

	for(int i=0;i<N;i++)
	{
		int num;
		cin>>num;
		int A1[num];
		int j1=0,j2=0;
		int A2[num];
		int count=0;
		bool b[1000]={false};
		for(int j=0;j<num;j++)
		{
			int t=0;
			cin>>t;
			if(t%2==0)
			{
				if(b[t])
				{
					count++;
				}
				else
				{
					A2[j2++]=t;
					b[t]=true;	
				}

				
			}
			else
			{
				if(b[t])
				{
					count++;
				}
				else
				{
					A1[j1++]=t;
					b[A1[j1-1]]=true;
				}
				
			}
			
		}
		// cout<<"Input Taken"<<endl;
		// int count=0;
		for(int j=0;j<j1-1;j++)
		{
			for(int k=j+1;k<j1;k++)
			{
				int temp=(A1[j]+A1[k])/2;
				if(b[temp])
					count++;
			}
		}

		for(int j=0;j<j2-1;j++)
		{
			for(int k=j+1;k<j2;k++)
			{
				int temp=(A2[j]+A2[k])/2;
				if(b[temp])
					count++;
			}
		}
		cout<<count<<endl;
	}

	return 0;
}