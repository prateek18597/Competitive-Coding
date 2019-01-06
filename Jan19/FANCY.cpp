#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	for(int i=0;i<=T;i++)
	{
		string temp;
		getline(cin,temp);
		if(temp!="")
		{
			size_t s1=temp.find(" not ");
			
			if(s1!=string::npos)
			{
					cout<<"Real Fancy"<<endl;
			}
			else
			{
				if(temp=="not" || temp.substr(0,4)=="not ")// || temp.substr(temp.length()-4,4)==" not")
				{
					cout<<"Real Fancy"<<endl;		
				}
				else
				{
					if(temp.length()>=4 && temp.substr(temp.length()-4,4)==" not")
						cout<<"Real Fancy"<<endl;
					else		
						cout<<"regularly fancy"<<endl;
				}
			}
		}
	}

}