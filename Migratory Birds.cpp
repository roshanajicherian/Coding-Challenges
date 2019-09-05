#include <iostream>
using namespace std;



int main()
{
    int n=0,A[1000000],b[5];

    cin>>n;
    for(int i=0;i<n;i++)
    {

        cin>>A[i];

    }
    for(int i=0;i<5;i++)
    {
        b[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        if(A[i]==1)
        {
            b[0]++;
        }
        else if(A[i]==2)
        {
            b[1]++;
        }
        else if (A[i]==3)
        {
            b[2]++;
        }

        else if(A[i]==4)
         {
             b[3]++;
         }
        else if (A[i]==5)
        {
            b[4]++;
        }
    }
    int ma=0;
    int co=0;
    for(int i=0;i<5;i++)
    {
        if(b[i]>ma)
        {
         ma=b[i];
         co=i+1;

        }

    }
    cout<<co;


    return 0;
}
