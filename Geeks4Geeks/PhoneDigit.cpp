#include<bits/stdc++.h>
using namespace std;

void pattern(string result,string s[],int n)
{
	if(n==0)
	{
		int len=s[n].length();
		for(int i=0;i<len;i++)
		{
			cout<<result+s[n][i]<<" ";
		}	
	}
	else
	{
		int len=s[n].length();
		for(int i=0;i<len;i++)
		{
			pattern(result+s[n][i],s,n-1);
		}
	}
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N;
		cin>>N;
		string s[N];
		for(int i=N-1;i>=0;i--)
		{
			int temp;
			cin>>temp;
			switch(temp)
			{
				case 2:
					s[i]="abc";
				break;
				case 3:
					s[i]="def";
				break;
				case 4:
					s[i]="ghi";
				break;
				case 5:
					s[i]="jkl";
				break;
				case 6:
					s[i]="mno";
				break;
				case 7:
					s[i]="pqrs";
				break;
				case 8:
					s[i]="tuv";
				break;
				case 9:
					s[i]="wxyz";
				break;
			}
		}
		pattern("",s,N-1);
		cout<<endl;
	}
	return 0;
}