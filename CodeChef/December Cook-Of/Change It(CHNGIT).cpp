#include <iostream>

using namespace std;

int main()
{
    int t=0;
    cin>>t;
    while(t>0)
    {
    int n=0,pos=0,maxe=0,elt=0,cou=0;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    int B[101];
    for(int i=0;i<101;i++)
        B[i]=0;
    for(int i=0;i<n;i++)
    {
        pos=A[i];
        for(int j=i;j<n;j++)
        {
            if(A[i]==A[j])
                B[pos]++;
        }
    }
    maxe=INT_MIN;
    for(int i=0;i<101;i++)
    {
        if((B[i]>maxe) && B[i]!=0)
            {
            maxe=B[i];
            elt=i;
            }
    }
    for(int i=0;i<n;i++)
    {
        if(A[i]!=elt)
            cou++;
    }
    cout<<cou<<'\n';
    t--;
    }
    return 0;
}
