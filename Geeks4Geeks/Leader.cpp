#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--)
    {
        long long int N;
        cin>>N;
        long long int A[N];
        for(long long int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        string s="";
        s=to_string(A[N-1])+" "+s;

        long long int max=A[N-1];
        for(long long int i=N-2;i>=0;i--)
        {
            if(A[i]>=max)
            {
                max=A[i];
                s=to_string(max)+" "+s;
            }
        }        
        cout<<s<<"\n";
    }
    return 0;
}