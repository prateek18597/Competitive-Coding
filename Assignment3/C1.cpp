#include<bits/stdc++.h>
#include<string.h>
using namespace std;

#define SIZE 3

string puzzle[SIZE];
string *s;
bool *b;
int number=1;//Represents number of queries
	

struct direction_size
{
	int h_size=0;
	int v_size=0;
};

direction_size getsizeinfo(int x,int y)
{
	direction_size ds;
	ds.h_size=0;
	ds.v_size=0;
	if(puzzle[x][y]!='+')
	{
		for(int i=y;i<SIZE;i++)
		{
			if(puzzle[x][i]!='+')
			{
				ds.h_size+=1;	
			}
			else
				break;
		}
	}
	if(puzzle[x][y]!='+')
	{
		for(int i=x;i<SIZE;i++)
		{
			if(puzzle[i][y]!='+')
				ds.v_size+=1;
			else
				break;
		}
	}
	return ds;
}

void printPuzzle()
{
	for(int i=0;i<SIZE;i++)
	{
		cout<<puzzle[i]<<endl;
	}
}

bool check()
{
	for(int i=0;i<number;i++)
	{
		if(b[i]==false)
			return false;
	}
	return true;
}

bool solver(int x,int y)
{
	if(check())
	{
		return true;
	}
	for(int i=x;i<SIZE;i++)
	{
		int j=0;
		if(i==x)
			j=y;
		for(int j=0;j<SIZE;j++)
		{
			if(puzzle[i][j]!='+')
			{
				for(int k=0;k<number;k++)
				{
					direction_size ds=getsizeinfo(i,j);
					string removed_portion_h="";
					string removed_portion_v="";
					if(s[k].length()==ds.h_size && b[k]==false)
					{
						for(int m=0;m<ds.h_size;m++)
						{
							removed_portion_h+=puzzle[i][j+m];
							if(puzzle[i][j+m]=='-' || puzzle[i][j+m]==s[k][m])
							{
								puzzle[i][j+m]=s[k][m];	
							}
							else
							{
								for(int mm=0;mm<m;mm++)
								{
									puzzle[i][j+mm]=removed_portion_h[mm];	
								}
								b[k]=false;
								break;
							}
							b[k]=true;
							
						}
						printPuzzle();
						if(solver(i,j+1))
						{
							return true;
						}
						if(b[k]==true)
						{
							for(int m=0;m<ds.h_size;m++)
							{
								puzzle[i][j+m]=removed_portion_h[m];	
							}
							b[k]=false;	
						}
					}
					if(s[k].length()==ds.v_size && b[k]==false)
					{
						for(int m=0;m<ds.v_size;m++)
						{
							removed_portion_v+=puzzle[i+m][j];
							if(puzzle[i+m][j]=='-' || puzzle[i+m][j]==s[k][m])
							{
								puzzle[i+m][j]=s[k][m];	
							}
							else
							{
								for(int mm=0;mm<m;mm++)
								{
									puzzle[i+mm][j]=removed_portion_v[mm];	
								}
								b[k]=false;
								break;
							}
							b[k]=true;

						}
						printPuzzle();
						if(solver(i+1,j))
						{
							return true;
						}
						if(b[k]==true)
						{
							for(int m=0;m<ds.v_size;m++)
							{
								puzzle[i+m][j]=removed_portion_h[m];	
							}
							b[k]=false;	
						}
					}
				}
			}
		}
	}
	return false;
}

int main()
{
	for(int i=0;i<SIZE;i++)
	{
		cin>>puzzle[i];
	}
	string query;
	cin>>query;
	for(int i=0;i<query.length();i++)
	{
		if(query[i]==';')
			number++;
	}
	
	s=new string[number]{""};
	b=new bool[number]{false};
	
	int length_vector[number]={0};
	
	int j=0;
	for(int i=0;i<query.length();i++)
	{
		if(query[i]!=';' || i==query.length()-1)
		{
			s[j]+=query[i];
			length_vector[j]++;
		}
		else
		{
			j++;
		}
	}
	for(int i=0;i<SIZE;i++)
	{
		solver(i,0);	
	}
	printPuzzle();
	return 0;
}