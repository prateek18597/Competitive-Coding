#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<ll> vll;


ll _sieve_size;
bitset<10000010> bs;
vll primes;         

void sieve(ll upperbound) 
{         
  _sieve_size = upperbound+1;
  bs.set();
  long long int count=0;
  bs[0] = bs[1] = 0;    
	for (ll i = 2; i < _sieve_size; i++) if (bs[i]) 
	{
    
    for (ll j = i*i; j < _sieve_size; j += i) bs[j] = 0;
    primes.push_back(i);
    count++;
    if(count==50000)
     break;
}
}        

int main()
{
	int T;
	cin>>T;
	sieve(1000000);
	long long int Q[T];
	long long int max=0;
	for(int i=0;i<T;i++)
	{
		cin>>Q[i];
	}

	for(long long int i=0;i<T;i++)
	{
		for(long long int j=0;j<Q[i];j++)
		{
			unsigned long long int qkq=primes.at(j)*primes.at((j+1)%Q[i]);
			cout<<qkq<<" ";
		}	
		
		cout<<endl;
	}
}
