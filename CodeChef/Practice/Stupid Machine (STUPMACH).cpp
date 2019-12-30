#include <iostream>

using namespace std;
int findL(int S[],int C[],int n)
{
    int i=1,L=0;
    int flag=0;
    while(i<=n)
    {
        flag=0;
        if(C[i]+1<=S[i])
            {   L=i;

                flag=1;
            }
        if(C[i]+1>S[i] && flag==0)
            {
                L=i-1;
                break;
            }

        i++;
    }
    if(L==0)
        L=-1;
    return L;
}
int main()
{
    int t=0;
    cin>>t;
    while(t>0)
    {
    int n=0,cou=0;
    cin>>n;
    int S[n+1],C[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>S[i];
        C[i]=0;
    }
    int L=findL(S,C,n);
    while(L!=-1)
    {
        for(int i=1;i<=L;i++)
        {
            C[i]++;
            cou++;
        }
        L=findL(S,C,n);
    }
    cout<<cou<<'\n';
    }
    return 0;
}
