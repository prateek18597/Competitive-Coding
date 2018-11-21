#include<iostream>
using namespace std;

void increment(int *a,int n)
{
	// int n=sizeof(a);
	for(int i=0;i<n;i++)
	{
		a[i]=10*i;
	}
}

int main()
{
	int* a=new int[5];
	a={1,2,3,4,5};
	increment(a,sizeof(a)/sizeof(*a));
	cout<<a[3];
	return 0;
}