#include <iostream>
using namespace std;


int main()
{   int n=0,m=0,s=0,rem=0,f=0,t=0,j=0;
    cin>>t;
    while(j<t)
    {
        cin>>n>>m>>s;
        rem=m%n;
        f=(rem+s-1)%n;
        if(f==0)
            cout<<n<<"\n";
        else
            cout<<f<<"\n";
        j++;
    }
    return 0;
}
