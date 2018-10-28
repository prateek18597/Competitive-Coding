#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		int N;
		cin>>N;
		if(N==2010 || N==2015 || N==2016 || N==2017 || N==2019)
			cout<<"HOSTED"<<endl;
		else
			cout<<"NOT HOSTED"<<endl;
	}
	return 0;
}