#include <iostream>
#include <stack>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;
stack<char> S;
stack<char> S1;
stack<char> S2;
int cou=0,prevcond=0,ncou=0;
string in;
string tstring;
void append()
{
    S2.push(1);
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
    S2.push(2);
    prevcond=2;
    char temp;
    while(k>0)
    {
         temp=S.top();
        S.pop();
        S1.push(temp);
        k--;
    }
}
void print(int k)
{

cout<<in[k-1]<<'\n';
}
void undo()
{
 if (S2.top()==2)
 {
     S2.pop();
     S.push(S1.top());
     S1.pop();
 }
 if (S2.top()==1)
 {
     S2.pop();
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
