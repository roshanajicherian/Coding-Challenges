#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;

int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
    lli n=0,a=0,b=0,c=0;
    cin>>n>>a>>b>>c;
    lli A[n];
    lli res=0;
    for(lli i=0;i<n;i++)
        cin>>A[i];
    lli mini=LLONG_MAX;
    for(int i=0;i<n;i++)
    {
        res=abs(A[i]-b) + abs(A[i]-a);
        if(res<mini)
            mini=res;
    }
    mini=mini+c;
    cout<<mini<<'\n';
    }
    return 0;
}
