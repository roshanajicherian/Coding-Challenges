#include <iostream>

using namespace std;

int main()
{
    int n=0,k=0,d=0,p=0,res=0;
    cin>>n>>k;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
                p++;
        }
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
    {
        if(A[i]!=A[j])
            d++;
    }
    int com=(n*(n-1))/2;
    res=(p*k)+(com*d);
    cout<<res<<'\n';
    return 0;
}
