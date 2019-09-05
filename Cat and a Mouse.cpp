#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n=0,i=0,a=0,b=0,c=0,d1=0,d2=0;
    cin>>n;
    int A[3];
    while(i<n)
    {
        cin>>a;
        cin>>b;
        cin>>c;
        d1=abs(c-b);
        d2=abs(c-a);
        if(d1<d2)
        {
            cout<<"Cat B\n";
        }
        if(d2<d1)
        {
            cout<<"Cat A\n";
        }
        if(d1==d2)
        {
            cout<<"Mouse C\n";
        }
        i++;
    }

    return 0;
}
