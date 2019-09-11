#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int coun(string S1,int len)
{
    int i=0,j=1,cou=0;
    while(i<len)
    {
        if(S1.substr(i,1)==S1.substr(j,1))
        {
         cou++;
         i=i+2;
         j=j+2;
        }
        else
        {
            j++;
            i++;
        }
    }

    return cou;
}
int main()
{
    string S1,S2;
    cin>>S1;
    int len=S1.length();
   int flag=1,i=0,j=1,cou=0;
   int ncou=coun(S1,len);
   while(ncou>0)
   {
       i=0;
       j=1;
       S2.clear();
        while (i<len)
    {
        if(S1.substr(i,1)==S1.substr(j,1))
        {
           cou++;
           i=i+2;
           j=j+2;
        }
        else

        {
            j++;
            i++;
            S2=S2+S1.substr(i-1,1);
        }
    }
    S1=S2;
    len=S1.length();
    ncou=coun(S1,len);
   }
if(len==0)
    cout<<"Empty String";
else
cout<<S2;

    return 0;
}
