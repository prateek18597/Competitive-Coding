#include<bits/stdc++.h>
using namespace std;

struct edge
{
	long long int start;
	long long int end;
	long long int cost;
};

bool comparator(edge a,edge b)
{
	return (a.cost<b.cost);
}

int main()
{
	long long int n,m,k;
	cin>>n>>m>>k;
	
	long long int B[n+1]={0};//Using this to denote set number of each vertex
	
	for(long long int i=1;i<=n;i++)
	{
		B[i]=i;//Set number of a vertex is same as his vertex number
	}

	edge e[m];

	for(long long int i=0;i<m;i++)
	{
		cin>>e[i].start>>e[i].end>>e[i].cost;
	}

	sort(e,e+m,comparator);	
	
	long long int cost=0;
	long long int ans1=0;
	long long int aa=0;
	
	for(long long int i=0;i<m;i++)
	{
		if(B[e[i].start]!=B[e[i].end])
		{
			if(B[e[i].start]<B[e[i].end])
			{
				B[e[i].end]=B[e[i].start];
			}
			else
			{
				B[e[i].start]=B[e[i].end];
			}
			
			ans1++;
			cost+=e[i].cost;
			if(ans1==k)
			{
				aa=cost;
			}
		}
	}
	cout<<aa<<" "<<cost-aa<<endl;
	return 0;
}