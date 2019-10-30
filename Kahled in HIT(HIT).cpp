#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t=0,n=0,x=60,y=75,z=90;
    cin>>t;
    while(t>0)
    {
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    int N=n/4;
    sort(A,A+n);
    x=A[N];
    y=A[2*N];
    z=A[3*N];
    if(A[N]==A[N-1]||A[2*N]==A[2*N-1]||A[3*N]==A[3*N-1])
        cout<<-1<<'\n';
    else
        cout<<x<<'\t'<<y<<'\t'<<z<<'\n';
    t--;
    }
    return 0;
}
