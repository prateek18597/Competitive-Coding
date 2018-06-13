#include<iostream>
using namespace std;
#include<string>
#include<sstream>
#include<algorithm>

int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		string st="frieza";
		string s;
		bool b[26];
		std::fill_n(b,26,false);
		cin>>s;
		for(int j=0;j<st.length();j++)
		{
			b[(st[j]-'a')]=true;
			// cout<<(st[j]-'a')<<endl;
		}

		string ans="";
		
		int countG=0,countB=0;
		for(int j=0;j<s.length();j++)
		{
			if(b[(s[j]-'a')])
			{
				countG++;
				if(countB!=0)
				{
					stringstream ss;
					ss<<countB;
					ans=ans+ss.str();
					countB=0;
				}
			}
			else
			{
				countB++;
				if(countG!=0)
				{
					stringstream ss;
					ss<<countG;
					ans=ans+ss.str();
					countG=0;
				}
			}
		}
		if(countB!=0)
				{
					stringstream ss;
					ss<<countB;
					ans=ans+ss.str();
					countB=0;
				}
				if(countG!=0)
				{
					stringstream ss;
					ss<<countG;
					ans=ans+ss.str();
					countG=0;
				}
		cout<<ans<<endl;


	}
	return 0;
}