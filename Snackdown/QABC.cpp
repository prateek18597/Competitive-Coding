#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		int N;
		cin>>N;
		int A[N],B[N];
		
		for(int j=0;j<N;j++)
		{
			cin>>A[j];
		}
		
		for(int j=0;j<N;j++)
		{
			cin>>B[j];
		}

		bool flag=false;

		for(int j=0;j<N-2;j++)
		{
			if(A[j]>B[j])
			{
				flag=true;
				break;
			}
			int gap=B[j]-A[j];
			A[j]=B[j];
			A[j+1]=A[j+1]+2*gap;
			if(A[j+1]>B[j+1])
			{
				flag=true;
				break;
			}
			A[j+2]=A[j+2]+3*gap;
			if(A[j+2]>B[j+2])
			{
				flag=true;
				break;
			}	
		}
		if(flag)
		{
			cout<<"NIE"<<endl;
		}
		else
		{
			if(A[N-1]==B[N-1] && A[N-2]==B[N-2])
				cout<<"TAK"<<endl;
			else
				cout<<"NIE"<<endl;		
		}
	}	
	return 0;
}