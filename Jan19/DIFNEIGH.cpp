#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		long long int N,M;
		cin>>N>>M;
		long long int X[2][6]={{1,1,2,2,3,3},{2,3,3,1,1,2}};
		long long int Y[8][8]={{1,1,2,2,3,3},{2,3,3,1,1,2}};
		long long int A[N][M];
		for(int j=0;j<N;j++)
		{
			for(int k=0;k<M;k++)
			{
				A[j][k]=0;
			}
		}
		int count=1;
		long long int max=4;
		
		if((N==1 && M==1) || (N==1 && M==2) || (N==2 && M==1))
		{
			max=1;
		}
		else
		{
			if((N==1 && M!=1) || (N!=1 && M==1) || (N==2 && M==2))
			{
				max=2;
			}
			else
			{
				if(N>=3 && M>=3)
				{
					max=4;
				}
				else
				{
					max=3;
				}
			}
		}
		cout<<max<<endl;
		if(max==1)
		{
			if(N==1 && M==1)
			cout<<1<<endl;
			else
			{
				if(N==1)
				{
					cout<<1<<" "<<1<<endl;
				}
				else
				{
					cout<<1<<endl<<1<<endl;
				}
			}
		}
		else
		{
			if(max==2)
			{
				if(N==2 && M==2)
				cout<<"1 1\n2 2"<<endl;
				else
				{
					if(N==1)
					{
						int start=1;
						int count=0;
						for(int j=0;j<M;j++)
						{
							cout<<start<<" ";
							count++;
							if(count==2)
							{
								if(start==1)
								{
									start++;
								}
								else
								{
									start--;
								}
								count=0;
							}
						}
						cout<<endl;
					}
					else
					{
						int start=1;
						int count=0;
						for(int j=0;j<N;j++)
						{
							cout<<start<<endl;
							count++;
							if(count==2)
							{
								if(start==1)
								{
									start++;
								}
								else
								{
									start--;
								}
								count=0;
							}
						}
					}
				}
			}
			else
			{
				if(max==3)
				{
					if(N==2)
					{
						for(int j=0;j<N;j++)
						{
							if(j%2==0)
							{
								for(int k=0;k<M;k++)
								{
									if(k%6<=1)
									{
										cout<<1<<" ";
									}
									else
									{
										if(k%6<=3)
										{
											cout<<2<<" ";
										}
										else
										{
											cout<<3<<" ";
										}
									}
								}			
							}
							else
							{
								for(int k=0;k<M;k++)
								{
									if(k%6==0 || k%6==5)
									{
										cout<<2<<" ";
									}
									else
									{
										if(k%6<=2)
										{
											cout<<3<<" ";
										}
										else
										{
											cout<<1<<" ";
										}
									}
								}
							}
							cout<<endl;
						}	
					}
					else
					{
						for(int j=0;j<N;j++)
						{
							int row;int column;
							switch(j%6)
							{
								case 0:
								case 1:row=1;
								break;
								case 2:
								case 3:row=2;
								break;
								case 4:
								case 5:row=3;
								break;

							}
							switch(j%6)
							{
								case 0:
								case 5:column=2;
								break;
								case 2:
								case 1:column=3;
								break;
								case 4:
								case 3:column=1;
								break;

							}
							cout<<row<<" "<<column<<endl;
						}	
					}
					
				}
				else
				{
					for(int j=0;j<N;j++)
					{
						if(j%2==0)
						{
							int start=(j%8)/2;
							start++;
							int count=0;
							for(int k=0;k<M;k++)
							{
								cout<<start<<" ";
								count++;
								if(count==2)
								{
									count=0;
									start++;
									if(start==5)
									{
										start=1;
									}
								}
							}
							cout<<endl;
						}
						else
						{
							int start;
							switch(j%8)
							{
								case 1:
									start=3;
								break;
								case 3:
									start=4;
								break;
								case 5:
								start=1;
								break;
								case 7:
								start=2;
								break;
							}
							cout<<start<<" ";
							int count=0;
							start++;
							if(start==5)
								start=1;
							for(int k=1;k<M;k++)
							{
								cout<<start<<" ";
								count++;
								if(count==2)
								{
									count=0;
									start++;
									if(start==5)
										start=1;
								}
							}
							cout<<endl;

						}
					}
				}
			}
		}
	}
	return 0;
}