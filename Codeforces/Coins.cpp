#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,s;
	cin>>n>>s;
	long long int count=1;

	// while(s!=0)
	// {
		long long int k=s%n;
		count+=k;
		s=k;
	// }
		cout<<s<<endl;
	return 0;
}