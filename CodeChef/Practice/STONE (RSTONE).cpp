#include <iostream>
#include <climits>
using namespace std;

int findmax(int A[],int n)
{
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(A[i]>maxi)
            maxi=A[i];
    }
    return maxi;
}
int main()
{
   int n=0,k=0,maxi=INT_MIN;
    cin>>n>>k;
    int A[n];
    for(int i=0;i<n;i++)
        {
            cin>>A[i];
            maxi=findmax(A,n);
        }
   if(k%2==0)
       k=2;
   else
       k=1;
    while(k>0)
    {
       for(int i=0;i<n;i++)
    {
        A[i]=maxi-A[i];
    }
    k--;
    maxi=findmax(A,n);
    }
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";

    return 0;
}
