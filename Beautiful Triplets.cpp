#include <iostream>

using namespace std;

int main()
{
    long long int n=0,d=0,d1=0,d2=0,co=0;
    cin>>n>>d;
    long long int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    for(long long int i=0;i<n-2;i++)
        for(long long int j=i+1;j<n-1;j++)
        {   d1=A[j]-A[i];
            if(d1==d)
        {
            for(long long int k=j+1;k<n;k++)
                {
                    d2=A[k]-A[j];
                    if(d2==d)
                        co++;

                }
        }
        }
                cout<<co;
    return 0;
}
