#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int avial=0,deman=0,tot=0,flag=0,t=0,coun=0;
    cin>>t;
    while(t>0)
    {
        tot=0;
        flag=0;
        coun=0;
    cin>>avial>>deman;
    if(deman==0)
        flag=1;
    int avialno[avial];
    for(int i=0;i<avial;i++)
        cin>>avialno[i];
    sort(avialno,avialno+avial,greater<int>());
    for(int i=0;i<avial;i++)
    {
        if(tot+avialno[i]<=deman)
        {
            tot+=avialno[i];
            coun++;
            if(tot==deman)
                {
                    flag=1;
                    break;
                }
        }
    }
    if(flag==1)
        cout<<coun;
    else
        cout<<-1;
    t--;
    }
    return 0;
}
