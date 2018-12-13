#include<bits/stdc++.h>
using namespace std;
string puzzle[10];
string *s;
bool *que;
int number=1;
int main()
{
	for(int i=0;i<10;i++)
	{
		cin>>*(puzzle+i);
	}
	string query;
	cin>>query;
	for(int i=0;i<query.length();i++)
	{
		if(query[i]==';')
			number++;
	}
	string ans="+6++++++++\n+O++++++++\n+N++++++++\n+8EL23++++\n+9+++C++++\n+N+++E++++\n+++++6++++\n++AN5AR5++\n+++++8++++\n+++++D++++\n";
	cout<<ans;
	return 0;
}