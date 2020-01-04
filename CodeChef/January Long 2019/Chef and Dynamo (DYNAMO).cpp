#include <iostream>
#include <math.h>
#include <stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
    long long int n=0,a=0,b=0,c=0,d=0,e=0,cursum=0,sum=0,uplim=1,lwlim=1,lwdis=0,updis=0,temps=0,sum2=0;
    cin>>n;
    for(int i=0;i<n;i++)
        uplim*=10;
    uplim-=1;
    cin>>a;
    lwdis=abs(a-lwlim);
    updis=abs(a-uplim);
    if(lwdis<updis)
    {
        temps=(2*uplim)+3;
    }
    else if(lwdis>=updis)
    {
        temps=(3*uplim)+2;
    }
    cout<<temps<<'\n';
    fflush(stdout);
    cin>>b;
    cursum=((a+b)+((2*uplim)+1));
    sum2=temps-(a+b);
    if(cursum<=temps)
        c=uplim;
    else
        c=abs(uplim-sum2)-1;
    cout<<c<<'\n';
    fflush(stdout);
    cin>>d;
    sum=a+b+c+d;
    e=temps-sum;
    cout<<e<<'\n';
    fflush(stdout);
    sum=a+b+c+d+e;
    if(sum==temps)
        {
        cout<<1<<'\n';
        fflush(stdout);
        }
    else
     {
         cout<<-1<<'\n';
         fflush(stdout);
         exit(0);
     }
    }
}
