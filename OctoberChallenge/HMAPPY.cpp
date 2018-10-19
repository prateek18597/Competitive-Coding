#include<bits/stdc++.h>
using namespace std;

struct Query  
{ 
	unsigned long long int a;
    unsigned long long int b; 
    unsigned long long int c;
};  
  

void heapify(Query arr[], int n, int i) 
{ 
    int largest = i;
    int l = 2*i + 1; 
    int r = 2*i + 2; 
  
    if (l < n && arr[l].c < arr[largest].c) 
        largest = l; 
  
    if (r < n && arr[r].c < arr[largest].c) 
        largest = r; 
  
    if (largest != i) 
    { 
        swap(arr[i], arr[largest]); 
  	    heapify(arr, n, largest); 
    } 
}

void heapify1(Query arr[], int n, int i) 
{ 
    int largest = i;
    int l = 2*i + 1; 
    int r = 2*i + 2; 
  
    if (l < n && arr[l].c > arr[largest].c) 
        largest = l; 
  
    if (r < n && arr[r].c > arr[largest].c) 
        largest = r; 
  
    if (largest != i) 
    { 
        swap(arr[i], arr[largest]); 
  	    heapify1(arr, n, largest); 
    } 
} 

void heapSort(Query arr[], int n) 
{ 
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
  
    for (int i=n-1; i>=0; i--) 
    { 
        swap(arr[0], arr[i]); 
  	    heapify(arr, i, 0); 
    } 
}

int main()
{
	long long int N;
	unsigned long long int M;
	cin>>N>>M;
	
	Query q[N];
	
	for(long int i=0;i<N;i++)
	{
		cin>>q[i].a;
	}
	for(long int i=0;i<N;i++)
	{
		cin>>q[i].b;
		q[i].c=q[i].a*q[i].b;
	}


	heapSort(q,N);
	
	for(unsigned long long int i=0;i<M;i++)
	{
		q[0].c=(--q[0].a)*q[0].b;
		heapify1(q,N,0);
	}
	cout<<q[0].c<<endl;	
		return 0;
}