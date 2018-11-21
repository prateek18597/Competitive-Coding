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
	long  long int A[N][N];
	
	priority_queue<p, vector<p>, CompareHeight> q;
	
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cin>>A[i][j];
		}
	}
	
	long long int min=INT_MAX;
	
		p pa[N][N]; 
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<N;j++)
			{
					pa[i][j].x=i;
					pa[i][j].y=j;
					pa[i][j].value=A[i][j];
			}
		}
		for(int k=0;k<N;k++)
		{
			q.push(pa[k][0]);
		}
		while(!q.empty())
		{
			p temp=q.top();
			q.pop();
			if(temp.x-1>-1 && temp.y!=0)
			{
				int x=temp.x-1;
				int y=temp.y;
				if(pa[x][y].value==A[x][y])
				{
					pa[x][y].value+=pa[temp.x][temp.y].value;
					q.push(pa[x][y]);
				}
				else
				{
					if(pa[x][y].value>pa[temp.x][temp.y].value+A[x][y])
					{
						pa[x][y].value=pa[temp.x][temp.y].value+A[x][y];	
					}
				}
			}
			if(temp.y+1<N)
			{
				int x=temp.x;
				int y=temp.y+1;
				if(pa[x][y].value==A[x][y])
				{
					pa[x][y].value+=pa[temp.x][temp.y].value;
					q.push(pa[x][y]);
				}
				else
				{
					if(pa[x][y].value>pa[temp.x][temp.y].value+A[x][y])
					{
						pa[x][y].value=pa[temp.x][temp.y].value+A[x][y];	
					}
				}
				if(y==N-1)
				{
					min=pa[x][y].value;//<<endl;
					// break;
				}
			}
			if(temp.x+1<N && temp.y!=0)
			{
				int x=temp.x+1;
				int y=temp.y;
				if(pa[x][y].value==A[x][y])
				{
					pa[x][y].value+=pa[temp.x][temp.y].value;
					q.push(pa[x][y]);
				}
				else
				{
					if(pa[x][y].value>pa[temp.x][temp.y].value+A[x][y])
					{
						pa[x][y].value=pa[temp.x][temp.y].value+A[x][y];	
					}
				}
			}
		}
		for(int i=0;i<N;i++)
		{
			if(pa[i][N-1].value<min)
				min=pa[i][N-1].value;//<<endl;
		}	
	
	cout<<min<<endl;
	return 0;
}