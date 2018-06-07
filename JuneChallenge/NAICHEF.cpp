#include<iostream>
using namespace std;
#include<iomanip>

int main()
{
	int T;
	
	cin>>T;
	
	for(int i=0;i<T;i++)
	{
		int N,a,b;
		cin>>N>>a>>b;
		int countA=0,countB=0;
		int n;
		double result;
		for(int j=0;j<N;j++)
		{
			cin>>n;

			if(n==a)
			{
				countA++;
			}

			if(n==b)
			{
				countB++;
			}
		}
		std::cout<<fixed;
		std::cout<<setprecision(10);
		result=(1.0*countA*countB)/(N*N);
		cout<<result<<endl;
	}
	return 0;
}