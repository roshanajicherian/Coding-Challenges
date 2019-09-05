#include <iostream>
using namespace std;

int main()
{
    int n=0,t=0,y=0,x=0;
    cin>>n;
    int A[10];
    for(int i=1;i<=n;i++)
    {

        cin>>A[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            x=i;
        if(A[j]==x)
        {
            t=j;
        }
        for(int k=1;k<=n;k++)
        {
        if(A[k]==t)
        y=k;
        }
        }
        cout<<y<<"\n";
    }

    return 0;
}

