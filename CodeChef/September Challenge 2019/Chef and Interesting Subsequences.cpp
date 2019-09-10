#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int A[100],t=1,n=1,k=1,cou=0,j=1,m=0,fsum=0,z=0;
    cin>>t;
    while(t!=0)
    {
        cou=0;

    cin>>n>>k;

    for(int i=0;i<n;i++)
        cin>>A[i];
    sort(A,A+n);
    int nsum=0;
    for(int i=0;i<n;i++)
    { m=k;
            j=i+1;
            while((m>=0)&&(j<=n))
            {
                nsum=A[i];
                nsum+=A[j];
                m--;
                j++;
                if(cou==0)
                    fsum=nsum;

                if(fsum==nsum)
                    cou++;
   if(A[j]!=A[j-1])
        break;
            }
    }
    cout<<cou<<'\n';
    t--;
    }

    return 0;
}
