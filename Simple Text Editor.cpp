#include <iostream>
#include <stack>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;
stack<char> S;
stack<char> S1;
int cou=0,prevcond=0,ncou=0;
string in;
string tstring;
void append()
{
    prevcond=1;
    cin>>in;
    int n=in.size();
    ncou=n;
    for(int i=0;i<n;i++)
      {
          S.push(in[i]);
        cou++;
      }
}
void dele(int k)
{
    prevcond=2;
    char temp;
    while(cou>k)
    {
         temp=S.top();
        S.pop();
        S1.push(temp);
        cou--;
    }
}
void print(int k)
{
    int i=0;
    while()
    {
        tstring+=S.top();
        S.pop();
       // i++;
        cou--;
    }

    reverse(tstring.begin(),tstring.end());
    in=tstring;
    int n=tstring.size();
    for(int i=0;i<n;i++)
        S.push(tstring[i]);
cout<<in;
}
void undo()
{
 if(prevcond==2)
 {
     S.push(S1.top());
     S1.pop();
 }
 if (prevcond==1)
 {
     while(ncou>0)
      {
          S.pop();
          ncou--;
      }
 }
}
int main()
{
    int q=0,t=0,k=0;
    cin>>q;
    while(q>0)
    {
         cin>>t;
         switch(t)
         {
             case 1:
                    append();
                    break;
             case 2: cin>>k;
                        dele(k);
                        break;
             case 3:cin>>k;
                    print(k);
                    break;
             case 4: undo();
                    break;
         }
        q--;
    }



    return 0;
}
