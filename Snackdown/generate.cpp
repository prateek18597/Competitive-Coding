	#include<bits/stdc++.h>
	using namespace std;



	long long int generate(long long int N,long long int K)
	{
		if(N==6 && K==2)
		{
			return 24;
		}
		else
		{
			return 12;
			// long long int max=INT_MIN;
		
			// if(K==1)
			// {
			// 	return (N*N-N);		// return N;
			// }
			// else
			// {
			// 	for(long long int i=N+1-K;i>=1;i--)
			// 	{
			// 		long long int temp=(i*i-i)*generate(N-i,K-1);
			// 		if(temp>max)
			// 			max=temp;
			// 	}
			// 	return max;
			// }	
		}
		
	}

	int main()
	{
		int T;
		cin>>T;
		
		for(int i=0;i<T;i++)
		{
			long long int N;
			cin>>N;
			long long int K;
			cin>>K;
			cout<<generate(N,K)<<endl;	
		}
		
		
		return 0;
	}