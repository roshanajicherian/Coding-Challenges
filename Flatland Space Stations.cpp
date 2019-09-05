#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n=0,m=0,mindi=0,t=0,maxdi=0;
    cin>>n>>m;
    int A[m],B[n];
    for(int i=0;i<m;i++)
    cin>>A[i];

    for(int i=0;i<n;i++)
    {

        mindi=INT_MAX;
        for(int j=0;j<m;j++)
    {   t=abs(i-A[j]);
        if(t<mindi)
        {
            mindi=t;
            B[i]=t;
        }
    }

    }
    maxdi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(B[i]>maxdi)
            maxdi=B[i];
    }
    cout<<maxdi;
    return 0;
}
