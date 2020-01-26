#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;

int main()
{
    lli t=0;
    cin>>t;
    while(t--)
    {
    lli n=0;
    cin>>n;
    lli S[n],P[n],V[n];
    for(lli i=0;i<n;i++)
        cin>>S[i]>>P[i]>>V[i];
    lli maxe=INT_MIN;
    lli prof=0;
    for(lli i=0;i<n;i++)
    {
        lli res=(P[i])%(S[i]+1);
        if(res==P[i])
            prof=0;
      /*  else if(res==0)
            prof=(P[i]/(S[i]+1))*V[i];*/
        else
            prof=(P[i]/(S[i]+1))*V[i];
        if(prof>maxe)
            maxe=prof;
    }
    cout<<maxe<<'\n';
    }
    return 0;
}
