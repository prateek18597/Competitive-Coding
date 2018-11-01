#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int getFirstMismatch(long long int a[],long long int n)
{

    long long int kk=-1;
    for(long long int i=1;i<=n;i++)
    {
        if(a[i]>i)
            kk=i;
    }
    return kk;
}

int main() {
    int t;
    cin>>t; 
    for(int i=0;i<t;i++)
    {
        long long int n;
        cin>>n;
        long long int a[n+1];
        bool f=false;
        long long int x=0;
        for(long long int j=1;j<=n;j++)
        {
            cin>>a[j];
        }
        long long int count=0;
        for(long int j=1;j<=n;)
        {
            j=getFirstMismatch(a,n);
            if(j==-1)
                break;
                if(a[j]==j+1)
                {
                    a[j]=a[j+1];
                    a[j+1]=j+1;
                    count++;
                }
                else
                {
                    if(a[j]==j+2)
                    {
                        a[j]=a[j+1];
                        a[j+1]=a[j+2];
                        a[j+2]=j+2;
                        count+=2;
                    }
                    else
                    {
                        f=true;
                        break;
                    }
                }
            
            
        }
        if(f)
            cout<<"Too chaotic"<<endl;
        else
            cout<<count<<endl;
    }
    return 0;
}
