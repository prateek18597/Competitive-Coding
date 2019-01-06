#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		long long int N;
		cin>>N;
		string s="2 ";
		for(int j=1;j<=N;j++)
		{
			cout<<1<<" "<<j<<" "<<j<<" "<<j<<endl;
			string a;
			cin>>a;
			int a_int=stoi(a);
			if(a_int==-1)
			{
				cout<<1<<" "<<j<<" "<<j+1<<" "<<j+2<<endl;
				cin>>a;
				a_int=stoi(a);
				if(a_int%2==0)
				{
					for(int k=0;k<N;k++)
					{
						s+=to_string(++a_int)+" ";
					}
					break;
				}
				else
				{
					a_int-=4;
					for(int k=0;k<N;k++)
					{
						s+=to_string(++a_int)+" ";
					}
					break;
				}
			}
			else
			{
				s+=a+" ";
			}
		}
		cout<<s<<endl;
		s="2 ";
		int ans;
		cin>>ans;
		if(ans==-1)
		{
			cout<<1<<" "<<1<<" "<<2<<" "<<3<<endl;
			string a;
			cin>>a;
			int a_int=stoi(a);
			if(a_int==-1)
			{
				// cout<<1<<" "<<j<<" "<<j+1<<" "<<j+2<<endl;
				// cin>>a;
				// a_int=stoi(a);
				// if(a_int%2==0)
				// {
				// 	for(int k=0;k<N;k++)
				// 	{
				// 		s+=to_string(++a_int)+" ";
				// 	}
				// 	break;
				// }
				// else
				// {
				// 	a_int-=4;
				// 	for(int k=0;k<N;k++)
				// 	{
				// 		s+=to_string(++a_int)+" ";
				// 	}
				// 	break;
				// }
			}
			else
			{
				if(a_int%2==0)
				{
					for(int k=0;k<N;k++)
					{
						s+=to_string(++a_int)+" ";
					}
					break;
				}
				else
				{
					a_int-=4;
					for(int k=0;k<N;k++)
					{
						s+=to_string(++a_int)+" ";
					}
					break;
				}
				// s+=a+" ";
			}
		}
		cout<<s<<endl;
		cin>>ans;
	}
	return 0;
}