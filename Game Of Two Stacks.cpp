#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int n1=0,n2=0,x=0,no=0,g=0;
    cin>>g;
    while(g>0)
    {
    no=0;
    cin>>n1>>n2>>x;
    int top1=0,top2=0;
    int s1[n1],s2[n2];
    for(int i=0;i<n1;i++)
        cin>>s1[i];
    for(int i=0;i<n2;i++)
        cin>>s2[i];
    int tsum=0;
    while(tsum<x)
    {
        while(top1<n1 && s1[top1]+tsum<=x)
        {
            tsum+=s1[top1];
            top1++;
        }
        no=top1;
        while(top2<n2 && top1>=0)
        {
            tsum+=s2[top2];
            top2++;
            if(tsum>x && top1>0)
            {
                top1--;
                tsum-=s1[top1];
            }
            if(tsum<=x && top1+top2<no)
                no=top1+top2;
        }

    }
    cout<<no<<'\n';
    g--;
    }
    return 0;
}
