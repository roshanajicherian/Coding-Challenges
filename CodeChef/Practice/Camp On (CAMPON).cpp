#include <iostream>
#include <stdio.h>
using namespace std;

struct days
{
    int days[32];
    int problem[101];
};
days D1,D2;
int main()
{
    int d=0,q=0,prob=0;
    long int t=0;
    cin>>t;
    while(t>0)
    {
        prob=0;
    cin>>d;
    for(int i=0;i<d;i++)
    {
        cin>>D1.days[i];
        cin>>D1.problem[i];
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>D2.days[i];
        cin>>D2.problem[i];
    }
    for(int i=0;i<q;i++)
    {
        for(int j=0;j<d;j++)
        {
            if(D1.days[j]<=D2.days[i])
            {
                prob+=D1.problem[j];
            }
        }
        if(prob>=D2.problem[i])
        {
            cout<<"Go Camp\n";
             prob=0;
        }
        else
            {
                cout<<"Go Sleep\n";
            prob=0;
            }
    }

    t--;
    }
return 0;
}
