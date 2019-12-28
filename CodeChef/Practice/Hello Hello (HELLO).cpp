#include <iostream>

using namespace std;

int main()
{
    int t=0;
    cin>>t;
    while(t>0)
    {
    int pos=0,i=0;
    float d=0,u=0,n=0,m=0,r=0,c=0;
    cin>>d>>u>>n;
    float init=u*d;
    float req=init;
    while(i<n)
    {
        cin>>m>>r>>c;
        float cost=(r*u)+(c/m);
        if(cost<req)
          {
              req=cost;
                pos=i+1;
          }
        i++;
    }
    if(req==init)
        cout<<0<<'\n';
    else cout<<pos<<'\n';
    t--;
    }
    return 0;
}
