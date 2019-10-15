#include <iostream>
#include <stack>
using namespace std;
stack<int> cyl1;
stack<int> cyl2;
stack<int> cyl3;

int main()
{
    int n1=0,n2=0,n3=0,s1=0,s2=0,s3=0,top1=0,top2=0,top3=0;
    cin>>n1>>n2>>n3;
    int c1[n1],c2[n2],c3[n3];
    for(int i=0;i<n1;i++)
        {
        cin>>c1[i];
        s1+=c1[i];
        }
    for(int i=0;i<n2;i++)
    {
        cin>>c2[i];
        s2+=c2[i];
    }
    for(int i=0;i<n3;i++)
    {
        cin>>c3[i];
        s3+=c3[i];
    }
    while((s1!=s2) || (s1!=s3))
    {
        if(s1==0 || s2==0 || s3==0)
            break;

        if(s1>s2 && s1>s3)
        {
            s1-=c1[top1];
            top1++;
        }
      else  if(s2>s1 && s2>s3)
        {
            s2-=c2[top2];
            top2++;
        }
        else if(s3>s1 && s3>s2)
        {   s3-=c3[top3];
            top3++;

        }
    }
    if(s1==s2 && s1==s3)
            cout<<s1;
        if(s1==0 || s2==0 || s3==0)
            cout<<0;
    return 0;
}
