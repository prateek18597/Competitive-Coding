#include <bits/stdc++.h>
using namespace std;
void countDistinct(int [], int , int );
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		countDistinct(a,k,n);cout<<endl;
	}
	return 0;
}

void countDistinct(int A[], int k, int n)
{
    map<int,int> m;
    int count=0;
    for(int i=0;i<k;i++)
    {
        if(m[A[i]]==0)
        {
            count++;
        }
        m[A[i]]++;
    }
    cout<<count<<" ";
    for(int i=k;i<n;i++)
    {
        if(m[A[i-k]]==1)
        {
            count--;
        }
        m[A[i-k]]--;
        if(m[A[i]]==0)
        {
            count++;
        }
        m[A[i]]++;
        cout<<count<<" ";
    }
    
}