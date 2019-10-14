#include <iostream>
#include <stack>
using namespace std;
stack<int> orginal;
stack<int> trackstack;
void Push(int x)
{
    orginal.push(x);
    if(trackstack.empty())
        {
            trackstack.push(x);
            return;
        }
    if (orginal.top()>trackstack.top())
        trackstack.push(orginal.top());
    else
        trackstack.push(trackstack.top());

}
void Pop()
{
        orginal.pop();
        trackstack.pop();
}
int maxstack()
{
    return trackstack.top();
}
int main()
{
     int n=0,q=0,x=0;
    cin>>n;
    while(n>0)
    {
        cin>>q;
        if(q==1)
        {
            cin>>x;
            Push(x);
        }
        if (q==2)
            Pop();
        if(q==3)
     cout<<maxstack()<<'\n';
     n--;
    }
    return 0;
}
