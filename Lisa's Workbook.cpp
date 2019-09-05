#include <iostream>

using namespace std;

int main()
{
    int n=0,k=0,tot=0,q=0,pg=0,cou=0,flg=0;
    cin>>n>>k;
    int A[10];
    for(int i=1;i<=n;i++)
        cin>>A[i];
    for(int i=1;i<=n;i++)
    {   tot=A[i];
        pg++;
        q=0;
        flg=0;
        while(tot>0)
        {
            tot--;
            q++;
            if(tot==0)
                flg=1;
             if(q==pg)
                cou++;
            if(q==k)
            {
                pg++;

            }
            if((q>k)&&(q%k==0)&&(flg==0))
                pg++;

        }
    }
    cout<<cou;
    return 0;
}
