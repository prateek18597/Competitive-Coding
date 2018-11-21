#include<bits/stdc++.h>
#include <queue> 
using namespace std;

struct pair
{
	int x;
	int y;
};

int main()
{
	int N=5;
	int A[N][N];
	queue<pair> q;
	long long int D[5][5]={-1};
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cin>>A[i][j];
		}
	}
	D[0][0]=A[0][0];
	pair s;
	s.x=0;
	s.y=0;
	q.push(s);

	while(!q.empty())
	{
		pair temp=q.pop();
		if(temp.y-1>-1)
		{
			pair xyz;
			xyz.x=temp.x;
			xyz.y=temp.y-1;
			if(D[xyz.x][xyz.y]==-1)
			{
				q.push(xyz);
			}
			else
			{
				if(D[temp.x][temp.y]+A[temp.x][temp.y-1]<D[temp.x][temp.y-1])
				{
					D[temp.x][temp.y-1]=D[temp.x][temp.y]+A[temp.x][temp.y-1];	
				}	
			}
		}
		if(temp.y+1<5)
		{
			pair xyz;
			xyz.x=temp.x;
			xyz.y=temp.y+1;
			if(D[xyz.x][xyz.y]==-1)
			{
				q.push(xyz);
			}
			else
			{	
				if(D[temp.x][temp.y]+A[temp.x][temp.y+1]<D[temp.x][temp.y+1])
				{
					D[temp.x][temp.y+1]=D[temp.x][temp.y]+A[temp.x][temp.y+1];	
				}
			}
		}
		if(temp.x-1>-1)
		{
			pair xyz;
			xyz.x=temp.x-1;
			xyz.y=temp.y;
			if(D[xyz.x][xyz.y]==-1)
			{
				q.push(xyz);
			}
			else
			{
				if(D[temp.x][temp.y]+A[temp.x-1][temp.y]<D[temp.x-1][temp.y])
				{
					D[temp.x-1][temp.y]=D[temp.x][temp.y]+A[temp.x-1][temp.y];	
				}
			}
		}
		if(temp.x+1<5)
		{
			pair xyz;
			xyz.x=temp.x+1;
			xyz.y=temp.y;
			if(D[xyz.x][xyz.y]==-1)
			{
				q.push(xyz);
			}
			else
			{				
				if(D[temp.x][temp.y]+A[temp.x+1][temp.y]<D[temp.x+1][temp.y])
				{
					D[temp.x+1][temp.y]=D[temp.x][temp.y]+A[temp.x+1][temp.y];	
				}
			}
		}
	}
	cout<<D[4][4];
	return 0;
}