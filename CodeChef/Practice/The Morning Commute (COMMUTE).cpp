#include <iostream>

using namespace std;


int main()
{
    int t=0,n=0,x=0,l=0,f=0,tot=0;
    cin>>t;
    while(t>0)
    {
        n=0,tot=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>l>>f;
        if(x>tot)
            tot+=(x-tot);
        if(x<tot)
            tot+=((x+f)-tot)+l;
        if(x==tot)
            tot+=l;
    }
    cout<<tot<<'\n';
    t--;
    }
    return 0;
}
