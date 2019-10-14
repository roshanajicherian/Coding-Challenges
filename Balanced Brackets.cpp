#include <iostream>
#include <string>
#include <string.h>
#include <stack>
using namespace std;
stack<char> S;
bool closecheck(char opening,char closing)
{
    if(opening=='(' && closing==')')
        return true;
    else if(opening=='[' && closing==']')
        return true;
    else if(opening=='{' && closing=='}')
        return true;
    else return false;
}
void checkpar(char* A,int len)
{
    int flag=0;
    for(int i=0;i<len;i++)
    {
        if(A[i]=='[' || A[i]=='{' || A[i]=='(')
            S.push(A[i]);
        else if(A[i]==']' || A[i]=='}' || A[i]==')')
        {
            if(S.empty()==1||(closecheck(S.top(),A[i])==0))
                {   flag=1;
                    break;
                }
            else
                S.pop();
        }
    }
    if(S.empty() && (flag==0))
        cout<<"YES\n";
    else
       {
           cout<<"NO\n";
           while(S.empty()==0)
            S.pop();

       }
}
int main()
{
    char A[1000];
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cin>>A;
    int len=strlen(A);
    checkpar(A,len);
    }
    return 0;
}
