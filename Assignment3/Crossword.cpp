#include<bits/stdc++.h>
#include<string.h>
using namespace std;

#define SIZE 3

string puzzle[SIZE];
string *s;
bool *que;
int number=1;//Represents number of queries
	

struct direction_size
{
	int h_size=0;
	int v_size=0;
};

direction_size getsizeinfo(int x=0,int y=0)
{
	direction_size ds;
	if(puzzle[x][y+1]=='-')
	{
		for(int i=y;i<SIZE;i++)
		{
			if(puzzle[x][i]!='+')
				ds.h_size+=1;
			else
				break;
		}
	}
	if(puzzle[x+1][y]=='-')
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

bool solver(int x=0,int y=0)
{
	int n=number;//sizeof(que)/sizeof(*que);
	bool flag=true;
	for(int i=0;i<n;i++)
	{
		if(que[i]==false)
		{
			flag=false;
			break;
		}
	}
	if(flag)
	{
		printPuzzle();
		return true;
	}
	for(int i=x;i<SIZE;i++)
	{
		for(int j=y;j<SIZE;j++)
		{
			if(puzzle[i][j]!='+')
			{	
				direction_size temp=getsizeinfo(i,j);
				if(temp.h_size!=0)
				{
					
					for(int k=0;k<number;k++)
					{
						string puzzle_x=puzzle[i];
						if(s[k].length()==temp.h_size && que[k]==false)
						{		
							que[k]=true;	
							for(int m=0;m<temp.h_size;m++)
							{
								if(puzzle[i][j+m]=='-' || puzzle[i][j+m]==s[k][m])
								{
									puzzle[i][j+m]=s[k][m];
								}
								else
								{
									puzzle[i]=puzzle_x;
									que[k]=false;
								}
							}
							if(solver(i,j+1))
							{
								printPuzzle();
								return true;
								
							}
							else
							{
								que[k]=false;	
								puzzle[i]=puzzle_x;
							}
						}	
					}
				}
				if(temp.v_size!=0)
				{
					for(int k=0;k<number;k++)
					{
						string puzzle_x="";
						if(s[k].length()==temp.v_size && que[k]==false)
						{		
							que[k]=true;	
							for(int m=0;m<temp.v_size;m++)
							{
								if(puzzle[i+m][j]=='-' || puzzle[i+m][j]==s[k][m])
								{
									puzzle_x+=puzzle[i+m][j];
									puzzle[i+m][j]=s[k][m];
								}
								else
								{
									for(int qq=0;qq<temp.v_size;qq++)
									{
										puzzle[i+qq][j]=puzzle_x[qq];	
									}
									que[k]=false;
								}
							}
							if(solver(i,j+1))
							{
								printPuzzle();
								return true;
							}
							else
							{
								for(int qq=0;qq<temp.v_size;qq++)
								{
									puzzle[i+qq][j]=puzzle_x[qq];	
								}
								que[k]=false;	
							}
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
	que=new bool[number]{false};
	
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
	printPuzzle();
	// cout<<solver();

	return 0;
}