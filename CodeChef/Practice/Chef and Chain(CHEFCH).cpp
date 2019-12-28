#include <iostream>

using namespace std;
int check(int p,int c,int f)
{
    if(p=='+' && f=='+' && c=='+')
        return 1;
    if(p=='-' && f=='-' && c=='-')
        return 2;
    return -1;
}
int main()
{
    int t=0;
    cin>>t;
    while(t>0)
    {
    int cou=0;
    string A;
    cin>>A;
    int n=A.length();
    for(int i=1;i<n-1;i++)
    {
            if(check(A[i-1],A[i],A[i+1])==1)
                {
                A[i]='-';
                cou++;
                }
            else if(check(A[i-1],A[i],A[i+1])==2)
                {
                A[i]='+';
                cou++;
                }
    }
        cout<<cou<<'\n';
    }
    return 0;
}
