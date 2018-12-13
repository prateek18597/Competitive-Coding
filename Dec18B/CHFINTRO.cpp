#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int N;
	cin>>N;
	long int R;
	cin>>R;

	for(int i=0;i<N;i++)
	{
		long int v;
		cin>>v;
		if(v>=R)
			cout<<"Good boi"<<endl;
		else
			cout<<"Bad boi"<<endl;
	}

	return 0;
}