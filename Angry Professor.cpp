#include <iostream>
using namespace std;

int main()
{
    int t=0,k=0,a=0,ys=0,no=0,n=0;
    cin>>t;
    int co=0;
    while(co<t)
    {   cin>>n>>k;
        ys=0;
        no=0;
        for(int i=0;i<n;i++)
        {
        cin>>a;
        if(a<=0)
        ys++;
        else
        no++;
       
    }
    if(ys>=k)
    cout<<"NO\n";
    else
    cout<<"YES\n";
     co++;
    }
}
