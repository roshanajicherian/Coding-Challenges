#include <iostream>

using namespace std;

int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
    int s=0,inisum=0;
    cin>>s;
    int A[3];
    for(int i=0;i<3;i++)
        {
            cin>>A[i];
            inisum+=A[i];
        }
    int fsum=0,bsum=0,locf=0,locb=2,nf=0,nb=2,cou=0;
    while(inisum!=0)
    {
        fsum=0;
        bsum=0;
    for(int i=nf;fsum+A[i+1]<=s && i<3;i++)
        {
            if(A[i]!=0)
            {
            fsum+=A[i];
            locf=i;
            }
        }
    for(int i=nb;bsum+A[i-1]<=s && i>0;i--)
        {
            if(A[i]!=0)
            {
            bsum+=A[i];
            locb=i;
            }
        }
        inisum=0;
    if(fsum>=bsum)
             for(int i=0;i<=locf;i++)
                {
                A[i]=0;
                nf=i;
                }
    else
            for(int i=2;i>=locb;i--)
            {
                A[i]=0;
                locb=i;
                nb=i;
            }
     for(int i=0;i<3;i++)
       {
           inisum+=A[i];
       }
        cou++;
    }
    cout<<cou<<'\n';
    }
    return 0;
}
