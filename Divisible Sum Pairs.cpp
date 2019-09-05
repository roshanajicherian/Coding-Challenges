#include <iostream>
using namespace std;

int main()
{
    int n=0,k=0,A[1000],count=0;
    cin>>n>>k;
    int sum=0;
    for(int a=0;a<n;a++)
    {

    cin>>A[a];
    }
    for(int i=0;i<n;i++)
    {   sum=0;
        for(int j=0;j<n;j++)
        {
         sum=A[i]+A[j];
         if((i<j)&&(sum%k==0))
         {
          count++;
         }
        }
    }
    cout<<count;
}
