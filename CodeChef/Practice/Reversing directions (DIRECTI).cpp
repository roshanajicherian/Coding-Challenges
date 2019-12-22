#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

int main()
{
    int t=0;
    cin>>t;
    stack<char> S1;
    stack<string> S2;
    string S;
    int n=0;
    char temp;
    string ts;
    while(t>0)
    {
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        getline(cin,S);
        temp=S[0];
        S1.push(temp);
        if(temp=='B'|| temp=='R')
            ts=S.substr(9);
        if(temp=='L')
            ts=S.substr(8);
        S2.push(ts);
    }
    int cou=0;
    while(S1.top()!='B')
    {
        if(cou==0)
            {
                cout<<"\nBegin on "<<S2.top();
                S2.pop();
            }
        else
        {
            if(S1.top()=='L')
               {
                cout<<"\nRight on "<<S2.top();
                S1.pop();
                S2.pop();
               }
            if(S1.top()=='R')
            {
                cout<<"\nLeft on "<<S2.top();
                S1.pop();
                S2.pop();
            }
        }
         cou++;

    }
    cout<<'\n';
    t--;
    }
    return 0;
}
