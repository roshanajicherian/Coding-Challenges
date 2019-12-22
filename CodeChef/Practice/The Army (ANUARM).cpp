#include <iostream>
#include <math.h>
//#include <algorithms.h>
using namespace std;

int main()
{
    int t=0,x=0,n=0,m=0;
    cin>>t;
    while(t>0)
    {
    cin>>n;
    cin>>m;
    int i=0;
    int maxv=INT_MIN,minv=INT_MAX;
    while(i<m)
    {
        cin>>x;
        maxv=max(maxv,x);
        minv=min(minv,x);
        i++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<max(abs(maxv-i),abs(minv-i))<<' ';
    }
    cout<<'\n';
    t--;
    }
    return 0;
}
