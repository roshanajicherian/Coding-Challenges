#include <iostream>

using namespace std;

int main()
{
    int n=0,a[50],k=0,b=0,charg=0,actu=0,fin=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        cin>>b;
        a[k]=0;
        for(int i=0;i<n;i++)
        {
            charg+=a[i];
        }
        int fcharg=charg/2;
    fin=b-fcharg;
    if(fin==0)
        {
            cout<<"Bon Appetit";
        }
        else
        {
            cout<<fin;
        }
    return 0;
}
