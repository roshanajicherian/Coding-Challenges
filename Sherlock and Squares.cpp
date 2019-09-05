#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long a=0,b=0,co=0,nroot=0,no=0,j=0,q=0;
    long long root=0;
    cin>>q;
    while(j<q)
    {
    cin>>a>>b;
    co=0;
    for(long long i=a;i<=b;i++)
    {
        root=sqrt(i);
        /*nroot=root*100;
            if((nroot%100)==0)
                co++;*/
          nroot=root*root;
          if(nroot==i)
          co++;

    }
    cout<<co<<"\n";
    j++;
    }

    return 0;
}
