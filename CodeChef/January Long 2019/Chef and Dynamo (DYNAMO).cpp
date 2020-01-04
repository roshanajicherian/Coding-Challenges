#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t=0;
    int n=0,a=0,b=0,c=0,d=0,e=0,cursum=0,sum=0;
    cin>>n;
    int uplim=pow(10,n);//confirm is 100 or 99
    int lwlim=1;//confirm if 1 or 0
    int lwdis=0,updis=0,temps=0;
    //cin>>n;
    cin>>a;
    lwdis=abs(a-lwlim);
    updis=abs(a-uplim);
    if(lwdis<updis)
    {
        temps=(2*uplim)+3;
    }
    else if(lwdis<updis)
    {
        temps=(3*uplim)+2;
    }
    cout<<"S : "<<temps<<'\n';
    cin>>b;
    cursum=((a+b)+((2*uplim)+1));
    if(cursum<=temps)
        c=uplim;
    else
        c=1;
    cout<<"C : "<<c<<'\n';
    cin>>d;
    sum=a+b+c+d;
    e=temps-sum;
    cout<<"E : "<<e;
    sum=a+b+c+d+e;
    cout<<"\nFinal Sum : "<<sum<<'\n';
    if(sum==temps)
        cout<<1<<'\n';
    else
        cout<<-1<<'\n';
}
