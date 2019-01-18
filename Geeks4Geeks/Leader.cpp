#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main() 
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        long long int N;
        scanf("%lld",&N);
        stack <long long int> s;
        
        for(long long int i=0;i<N;i++)
        {
            long long int a;
            scanf("%lld",&a);
            
            if(s.empty()==false)
            {
                while(a>s.top())
                {
                    s.pop();
                    if(s.empty())
                    {
                        break;
                    }
                }    
            }
            s.push(a);
        }
        
        string str="";
        while (!s.empty()) 
        { 
            str=to_string(s.top())+ " "+str; 
            s.pop(); 
        } 
        cout<<str<<endl;
    }
    return 0;
}