#include<iostream>
using namespace std;

int main()
{
	int a=100;
	int *b=&a;
	int &c=a;
	cout<<a<<endl<<&a<<endl;
	cout<<*b<<endl;//<<&b<<endl<<*b<<endl;
	c=10;
	cout<<&c<<"\t"<<&a;
	return 0;
}