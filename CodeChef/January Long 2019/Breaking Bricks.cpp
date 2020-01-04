#include <iostream>

using namespace std;
int countnot(int A[])
{ int zer=0;
    for(int i=0;i<3;i++)
    {
        if(A[i]!=0)
            zer++;
    }
    return zer;
}
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
    int fsum=0,bsum=0,locf=0,locb=2,cou=0;
    if(s<A[0] || s<A[2])
        cout<<cou<<'\n';
        else if (A[0]==A[1] && A[0]==A[2] && A[0]==s)
            cout<<3<<'\n';
    else if (inisum<=s)
        cout<<1<<'\n';
   else
    {
    while(inisum!=0)
    {

        fsum=0;
    for(int i=0;fsum+A[i]<=s && i<3;i++)
        {
            if(A[i]!=0)
            {
            fsum+=A[i];
            locf=i;
            }
        }

        inisum=0;
             for(int i=0;i<=locf;i++)
                A[i]=0;
        cou++;
    if(countnot(A)==1)
        {
            cou++;
            break;
        }
     for(int i=0;i<3;i++)
       {
           inisum+=A[i];
       }

    }
    cout<<cou<<'\n';
    }
    }
    return 0;
}
