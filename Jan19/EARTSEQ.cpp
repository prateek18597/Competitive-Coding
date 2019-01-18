#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<ll> vll;


ll _sieve_size;
bitset<10000010> bs;
vll primes;   
vll first;      
void sieve(ll upperbound) 
{         
  _sieve_size = upperbound+1;
  bs.set();
  long long int count=0;
  bs[0] = bs[1] = 0;    
	for (ll i = 2; i < _sieve_size; i++) if (bs[i]) 
	{
    
    for (ll j = i*i; j < _sieve_size; j += i) bs[j] = 0;
    if(i==3 || i==5 || i==7||i==11 || i==13 ||i==17 || i==19 ||i==23 || i==29 ||i==31)
    {
    	first.push_back(i);
    }
    else
    {
    	if(i!=2)
    	{
    		primes.push_back(i);
    		count++;
    	}
    }
    if(count==5000)
     break;
}
}        

int main()
{
	int T;
	cin>>T;
	sieve(100000);
	// bool debug[1000000]={false};
	long long int Q[T];
	long long int max=0;
	for(int i=0;i<T;i++)
	{
		cin>>Q[i];
	}

	for(long long int i=0;i<T;i++)
	{
		long long int xx[Q[i]];
		for(long long int j=0;j<Q[i];j++)
		{
			long long int a1=primes.at(j%5000);
			if(j%5000)
			{
				a1*=2;
			}
			if(j==Q[i]-1)
			{
				a1*=2;
			}
			int k=(j+j/5000)%10;
			a1*=first.at(k);
			if(j!=0 && j!=Q[i]-1)
				a1*=first.at((j-1+j/5000)%10);
			xx[j]=a1;
			cout<<a1<<" ";
		}	
		cout<<endl;
	}
}
