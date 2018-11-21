#include<bits/stdc++.h>
#include <queue> 
using namespace std;

struct p
{
	int x;
	int y;
	long long int value;
};

struct CompareHeight 
{ 
    bool operator()(p p1, p p2) 
    { 
        return p1.value > p2.value; 
    } 
}; 

int main()
{
	int N;
	cin>>N;
	int A[N][N];
	
	priority_queue<p, vector<p>, CompareHeight> q;
	
	p pairs[N][N];

	long long int D[N][N];
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cin>>A[i][j];
			D[i][j]=A[i][j];
			pairs[i][j].x=i;
			pairs[i][j].y=j;
			pairs[i][j].value=A[i][j];
		}
	}
	
	q.push(pairs[0][0]);

	while(!q.empty())
	{
		p temp=q.top();
		q.pop();
		if(temp.y-1>-1)
		{
			int x=temp.x;
			int y=temp.y-1;
			if(pairs[x][y].value==A[x][y])
			{
				pairs[x][y].value+=pairs[temp.x][temp.y].value;
				q.push(pairs[x][y]);
			}
			else
			{
				if(pairs[x][y].value>pairs[temp.x][temp.y].value+A[x][y])
				{
					pairs[x][y].value=pairs[temp.x][temp.y].value+A[x][y];	
				}
			}
		}
		if(temp.y+1<N)
		{
			int x=temp.x;
			int y=temp.y+1;
			if(pairs[x][y].value==A[x][y])
			{
				pairs[x][y].value+=pairs[temp.x][temp.y].value;
				q.push(pairs[x][y]);
			}
			else
			{
				if(pairs[x][y].value>pairs[temp.x][temp.y].value+A[x][y])
				{
					pairs[x][y].value=pairs[temp.x][temp.y].value+A[x][y];	
				}
			}
		}
		if(temp.x-1>-1)
		{
			int x=temp.x-1;
			int y=temp.y;
			if(pairs[x][y].value==A[x][y])
			{
				pairs[x][y].value+=pairs[temp.x][temp.y].value;
				q.push(pairs[x][y]);
			}
			else
			{
				if(pairs[x][y].value>pairs[temp.x][temp.y].value+A[x][y])
				{
					pairs[x][y].value=pairs[temp.x][temp.y].value+A[x][y];	
				}
			}
		}
		if(temp.x+1<N)
		{
			int x=temp.x+1;
			int y=temp.y;
			if(pairs[x][y].value==A[x][y])
			{
				pairs[x][y].value+=pairs[temp.x][temp.y].value;
				q.push(pairs[x][y]);
			}
			else
			{
				if(pairs[x][y].value>pairs[temp.x][temp.y].value+A[x][y])
				{
					pairs[x][y].value=pairs[temp.x][temp.y].value+A[x][y];	
				}
			}
		}
	}

	cout<<pairs[N-1][N-1].value<<endl;
	return 0;
}