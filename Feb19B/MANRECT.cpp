#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define sp " "

int main()
{
	// ios_base::sync_with_stdio(false); 
	// cin.tie(NULL);
	long long int T;
	cin>>T;
	while(T--)
	{
		long long int xl,yl,xu,yu;
		cout<<"Q 0 0"<<nl;
		long long int m;
		cin>>m;
		if(m==-1)
			break;
		cout<<"Q "<<m<<" 0"<<nl;
		cin>>yl;
		if(yl==-1)
			break;
		yl/=2;
		xl=m-yl;
		cout<<"Q "<<xl<<" "<<yl<<nl;
		long long int m1;
		cin>>m1;
		if(m1==-1)
			break;
		long long int sum_u=m1+m;
		cout<<"Q "<<sum_u<<" "<<yl<<nl;
		cin>>yu;
		if(yu==-1)
			break;
		yu=(yu+yl)/2;
		xu=sum_u-yu;
		cout<<"A "<<xl<<sp<<yl<<sp<<xu<<sp<<yu<<nl;
		int ans;
		cin>>ans;
		if(ans!=1)
			break;
	}
}
