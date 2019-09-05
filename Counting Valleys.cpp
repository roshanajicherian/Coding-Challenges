#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n=0,lvl=0,valy=0;
   cin>>n; 
   char a[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]=='U')
            lvl++;
        if(a[i]=='D')
            lvl--;
        if((lvl==0)&&(a[i]=='U'))
        {
            valy++;
        }
    }
    cout<<valy;

return 0;
}
