#include <iostream>
using namespace std;

int main()
{
    int A[5000],n=0,mi=0,ma=0;
    int in=0,de=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    mi=A[0];
    ma=A[0];
    for(int i=0;i<n;i++)
    {
        if(A[i]<mi)
        {
            mi=A[i];
            de++;

        }
        if(A[i]>ma)
        {
            in++;
            ma=A[i];
        }

    }
    cout<<in<<" "<<de;
}
