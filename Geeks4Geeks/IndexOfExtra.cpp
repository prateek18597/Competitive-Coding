#include<bits/stdc++.h>
using namespace std;
int findExtra(int a[],int b[],int n);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n-1];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n-1;i++){
			cin>>b[i];
		}
		cout<<findExtra(a,b,n)<<endl;
	}
}

int findExtra(int a[],int b[],int n)
{
	map<int,int> m;
	
	for(int i=0;i<n-1;i++)
	{
		m[b[i]]=1;
	}

	for(int i=0;i<n;i++)
	{
		if(m[a[i]]==0)
		{
			return i;
		}
	}
}