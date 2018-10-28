#include<bits/stdc++.h>
using namespace std;

struct Query  
{ 
	unsigned long long int a;
    unsigned long long int b; 
    unsigned long long int c;
};  
 
Query *q; 
long long int n; 
unsigned long long int M;

void heapify(int i) 
{ 
    int largest = i;
    int l = 2*i + 1; 
    int r = 2*i + 2; 
  
    if (l < n && q[l].c < q[largest].c) 
        largest = l; 
  
    if (r < n && q[r].c < q[largest].c) 
        largest = r; 

    if (l < n && q[l].c == q[largest].c) 
        if(q[l].b>q[largest].b)
        	largest = l; 
  
    if (r < n && q[r].c == q[largest].c) 
      	if(q[r].b>q[largest].b)
        	largest = r;
  
    if (largest != i) 
    { 
        swap(q[i], q[largest]); 
  	    heapify(largest); 
    } 
}

void heapify1(int i) 
{ 
    int largest = i;
    int l = 2*i + 1; 
    int r = 2*i + 2; 
  
    if (l < n && q[l].c > q[largest].c) 
        largest = l; 
  
    if (r < n && q[r].c > q[largest].c) 
        largest = r; 

    if (l < n && q[l].c == q[largest].c) 
        if(q[l].b>q[largest].b)
        	largest = l; 
  
    if (r < n && q[r].c == q[largest].c) 
      	if(q[r].b>q[largest].b)
        	largest = r; 
  
    if (largest != i) 
    { 
        swap(q[i], q[largest]); 
  	    heapify1(largest); 
    } 
} 

void heapSort() 
{ 
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify1(i); 
  
    for (int i=n-1; i>=0; i--) 
    { 
        swap(q[0], q[i]); 
  	    heapify1(0); 
    } 
}

void printArray() 
{ 
    for (int i=0; i<n; ++i) 
        cout <<"(" <<q[i].a << " "<<q[i].b << " "<<q[i].c << "),"; 
    cout << "\n"; 
} 
 

int main()
{
	
	cin>>n>>M;
	
	q=new Query[n];
	
	for(long int i=0;i<n;i++)
	{
		cin>>q[i].a;
	}
	for(long int i=0;i<n;i++)
	{
		cin>>q[i].b;
		q[i].c=q[i].a*q[i].b;
	}


	heapSort();
	// printArray();
	for(unsigned long long int i=0;i<M;i++)
	{
		q[0].c=(--q[0].a)*q[0].b;
		heapify1(0);
		// printArray();
	}
	cout<<q[0].c<<endl;	
		return 0;
}n