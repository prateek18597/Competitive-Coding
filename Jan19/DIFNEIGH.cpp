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

int getNumber1(bool b[4])
{
	for(int i=3;i>-1;i--)
	{
		if(b[i]==false)
		{
			return i;
		}
	}
	return -1;
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
				int B[4]={0,0,0,0};
				bool b[4]={false,false,false,false};
				int c[4]={0,0,0,0};
				if(A[x][y]==0)
					A[x][y]=1;

				if(x-1>=0)
				{
					B[0]=A[x-1][y];
					if(B[0]!=0)
					{
						b[B[0]-1]=true;
						c[B[0]-1]++;
					}
				}
				if(y-1>=0)
				{
					B[1]=A[x][y-1];	
					if(B[1]!=0)
					{
						b[B[1]-1]=true;
						c[B[1]-1]++;
					}
				}
				bool flag=false;
				if(x+1<N)
				{
					B[2]=A[x+1][y];
					if(B[2]!=0 && b[B[2]-1]==true)
					{	
						A[x+1][y]=getNumber1(b)+1;
						flag=true;
					}
					else
					{
						if(B[2]!=0)
						{
							b[B[2]-1]=true;
							c[B[2]-1]++;
						}
					}
					
				}
				bool flag1=false;
				if(y+1<M)
				{
					B[3]=A[x][y+1];
					if(B[3]!=0 && b[B[3]-1]==true)
					{	
						A[x][y+1]=getNumber1(b)+1;
						B[3]=A[x][y+1];
						b[B[3]-1]=true;
						flag1=true;
					}
					else
					{
						if(B[3]!=0)
						{
							b[B[3]-1]=true;
							c[B[3]-1]++;
						}
					}
				}

				int temp=getNumber(b);
				if(temp!=-1)
				{
					
					if(y+1<M && flag1==false && A[x][y+1]==0)
					{
						A[x][y+1]=temp+1;
						b[temp]=true;
						temp=getNumber(b);
					}
					
						
					if(temp!=-1 && x+1<N && flag==false)
					{
						A[x+1][y]=temp+1;
						b[temp]=true;
					}
				}

				for(int j=0;j<N;j++)
				{
					for(int k=0;k<M;k++)
					{
						cout<<A[j][k]<<" ";
					}
					cout<<endl;
				}
				cout<<"^^^^^^^^^^^^^^^^^"<<endl;

				B[0]=0;B[1]=0;B[2]=0;B[3]=0;
				b[0]=false;b[1]=false;b[2]=false;b[3]=false;
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