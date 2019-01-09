#include<bits/stdc++.h>
using namespace std;

int getNumber(bool b[4])
{
	for(int i=0;i<4;i++)
	{
		if(b[i]==false)
		{
			return i;
		}
	}

	return -1;
}

bool collision()
{
	return true;
}

int main()
{
	long long int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		long long int N,M;
		cin>>N>>M;
		long long int A[N][M];
		for(int j=0;j<N;j++)
		{
			for(int k=0;k<M;k++)
			{
				A[j][k]=0;
			}
		}
		int count=1;
		long long int max=N>M?N:M;
		
		if(N+M>5)
		{
			max=4;
		}

		for(long long int x=0;x<N;x++)
		{
			for(long long int y=0;y<M;y++)
			{
				int B[4]={0,0,0,0};//Problem here.
				bool b[4]={false,false,false,false};
				if(A[x][y]==0)
					A[x][y]=1;
				if(x-1>=0)
				{
					B[0]=A[x-1][y];
					if(b[B[0]]==true)
					{
						// Call for check;
					}
					else
					{
						b[B[0]]=true;
					}
				}
				if(y-1>=0)
				{
					B[1]=A[x][y-1];	
					if(b[B[1]]==true)
					{
						// Call for check;
					}
					else
					{
						b[B[1]]=true;
					}
				}
				if(x+1<N)
				{
					B[2]=A[x+1][y];
					if(b[B[2]]==true)
					{
						// Call for check;
					}
					else
					{
						b[B[2]]=true;
					}
				}
				if(y+1<M)
				{
					B[3]=A[x][y+1];
					if(b[B[3]]==true)
					{
						// Call for check;
					}
					else
					{
						b[B[3]]=true;
					}
				}

				int temp=getNumber(b);
				if(temp!=-1)
				{
					if(y+1<M)
					{
						A[x][y+1]=temp+1;
						b[temp]=true;
					}
					
					temp=getNumber(b);	
					if(temp!=-1 && x+1<N)
					{
						A[x+1][y]=temp+1;
						b[temp]=true;
					}
				}
					
				
			}
		}
		cout<<max<<endl;
		for(int j=0;j<N;j++)
		{
			for(int k=0;k<M;k++)
			{
				cout<<A[j][k]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}