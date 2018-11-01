#include<bits/stdc++.h>
using namespace std;

struct edge
{
	long long int start;
	long long int end;
	long long int cost;
};

struct vertex
{
	long long int connection=0;
	long long int cost=0;
};

bool comparator(edge a,edge b)
{
	return (a.cost<b.cost);
}

int main()
{
	long long int n,m,k;
	cin>>n>>m>>k;
	int B[n+1]={0};
	int C[n+1]={0};
	int D[n+1]={0};
	for(long long int i=1;i<=n;i++)
	{
		B[i]=i;
	}

	edge e[m];
	vertex v[n];
	for(long long int i=0;i<m;i++)
	{
		cin>>e[i].start>>e[i].end>>e[i].cost;

	}
	sort(e,e+m,comparator);	
	long long int cost=0;
	long long int last_cost=0;
	long long int mini=n;
	long long int ans1=0;
	long long int aa=0;
	for(int i=0;i<m;i++)
	{
		if(B[e[i].start]!=B[e[i].end])
		{
			if(B[e[i].start]<B[e[i].end])
			{
				B[e[i].end]=B[e[i].start];//true;
			}
			else
			{
				B[e[i].start]=B[e[i].end];//
			}
			
			v[e[i].start].connection++;
			v[e[i].end].connection++;


			C[e[i].end]++;
			
			if(mini>C[e[i].end])
			{
				mini=C[e[i].end];
			}
			
			C[e[i].start]++;
			if(mini>C[e[i].start])
			{
				mini=C[e[i].start];
			}
			
			last_cost=e[i].cost;
			if(last_cost>v[e[i].start].cost)
			{
				v[e[i].start].cost=last_cost;
			}
			if(last_cost>v[e[i].end].cost)
			{
				v[e[i].end].cost=last_cost;
			}
			if(last_cost>D[e[i].start])
			{
				D[e[i].start]=last_cost;
			}
			if(last_cost>D[e[i].end])
			{
				D[e[i].end]=last_cost;
			}
			ans1++;
			cost+=e[i].cost;
			if(ans1==k)
			{
				aa=cost;
			}
		}
	}
	long long int maxpath=0;
	for(long long int k=1;k<=n;k++)
	{
		if(C[k]==mini)
			if(D[k]>maxpath)
				maxpath=D[k];
	}

	cout<<aa<<" "<<cost-aa<<endl;
	return 0;
}