#include <iostream>
using namespace std;

int main()
{
    int no=0,i=0,n=0;
    cin>>n;
    for(int k=0;k<n;k++)
    {     i=0;
        cin>>no;
        int newno=no;
    while(no>0)
    {

    int q=no/10;
    int r=no%10;
    if(r!=0)
    {
        if(newno%r==0)
        {
            i++;
        }

    }
    no=q;

    }
cout<<i<<"\n";

    }

}
