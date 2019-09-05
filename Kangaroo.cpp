#include <iostream>
using namespace std;
int main()
{

    int x1=0,v1=0,flag=0;
    int x2=0,v2=0;
    cin>>x1>>v1;
    cin>>x2>>v2;
    int d1=0,d2=0;
    int i=0;
 
    while(i<3000)
    {
        d1=x1+v1;
        d2=x2+v2;
        if(d1==d2)
        {
         
            flag=1;
            break;
        }
        else
        {
            x1=d1;
            x2=d2;
        }
        i++;
    }
    if(flag==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
