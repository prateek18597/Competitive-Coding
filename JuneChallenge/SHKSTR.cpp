#include<iostream>
using namespace std;
#include<string>

int main()
{
	int N;
	cin>>N;
	
	string s[N];
	
	for(int i=0;i<N;i++)
	{
		cin>>s[i];
	}
	
	int Q;
	cin>>Q;
	for(int i=0;i<Q;i++)
	{
		int r;
		string p;
		cin>>r>>p;

		int pos=-1;
		string mv="";
		int len=0;
		
		for(int j=0;j<r;j++)
		{
			for(int m=p.length()>s[j].length()?s[j].length():p.length();m>=len;m--)
			{	
				if(s[j].substr(0,m)==p.substr(0,m))
					{
						string v=s[j];
						if(mv!="")
						{
							if(m>len)
							{
								len=m;
								mv=v;
								pos=j;
							}
							else
							{	
								if(m==len && v<mv)
								{
									mv=v;
									pos=j;		
								}
							}
						}
						else
						{
							len=m;
							mv=v;
							pos=j;
						}
						break;
					}
				}
				
		}
		cout<<s[pos]<<endl; 
	}


	return 0;
}