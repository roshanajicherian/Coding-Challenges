#include <iostream>

using namespace std;

int main()
{
    long long int t=0,b=0,w=0,bc=0,wc=0,z=0,bbc=0,wwc=0,fc=0;
    cin>>t;

    for(long long int i=0;i<t;i++)
    {
        cin>>b>>w>>bc>>wc>>z;
        if(((bc+z)==wc)||(wc+z)==bc)
        {
        bbc=b*bc;
        wwc=w*wc;
        }

    if((bc+z)<wc)
        {
        bbc=bc*b;
        wwc=(bc+z)*w;
        }
    if((wc+z)<bc)
        {
        bbc=(wc+z)*b;
        wwc=wc*w;
        }
    if((bc==z)&& (wc==z))
       {
        bbc=b*bc;
        wwc=w*wc;
       }
    if(((bc+z)>wc)&&((wc+z)>bc))
    {
        bbc=b*bc;
        wwc=w*wc;
    }
    fc=bbc+wwc;
    cout<<fc<<'\n';
    fc=0;
    }

    return 0;
}
