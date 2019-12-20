#include <iostream>

using namespace std;

int main()
{
    int t=0,n=0,mh=0,mw=0,loc=-1;
    cin>>t;
    while(t>0)
    {
        loc=-1;
        mw=0;
        mh=0;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    int i=0;
    while(i<(n-1))
    {
        if(A[i]!=A[i+1] && (i-loc)!=0)
        {
            mh++;
            mw++;
            loc=i+1;
        }
        else if(A[i]!=A[i+1] && (i-loc)==0)
        {
            mh++;
            loc=i+1;
        }
        i++;
    }
    int tot=mh+mw;
    cout<<tot<<'\n';
    t--;
    }
    return 0;
}
