#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		long long int N;
		cin>>N;
		
		long long int A[N+1];
		bool B[N+1]={false};
		long long int C[N+1]={0};
		for(long long int j=1;j<=N;j++)
		{
			cin>>A[j];
		}
		bool flag=false;
		for(long long int j=1;j<=N;j++)
		{
			if(B[A[A[j]]]==false)
			{

				B[A[A[j]]]=true;
				C[A[j]]=A[j];
			}
			if(C[A[j]]!=A[j]){
				flag=true;
				break;
			}
			
		}
		if(flag)
			cout<<"Truly Happy"<<endl;
		else
			cout<<"Poor Chef"<<endl;


	}
	return 0;
}