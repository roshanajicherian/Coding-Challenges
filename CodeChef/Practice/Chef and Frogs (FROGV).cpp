#include <iostream>

using namespace std;
int k=0;
bool check(int x,int y)
{
    if(abs(x-y)<=k)
        return true;
    else
        return false;
}
int main()
{
    int n=0,p=0,finx=0,finy=0,loc=0,x=0,y=0;
    cin>>n>>k>>p;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    while(p>0)
    {
        cin>>x>>y;
        finx=x;
        finy=y;
        if(check(A[finx],A[finy]))
            cout<<"Yes\n";

        else
           {
               loc=0;
            while(!check(A[x],A[y]) && loc<n)
                {
                    loc++;
                    if(check(A[x+loc],A[x]))
                        x=x+loc;
                }
                if(!check(A[x],A[y]))
                    cout<<"No\n";
                else
                    cout<<"Yes\n";
           }
        p--;
    }
    return 0;
}
