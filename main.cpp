#include <iostream>
#include <stack>
using namespace std;
stack<int> cyl1;
stack<int> cyl2;
stack<int> cyl3;

int main()
{
    int n1=0,n2=0,n3=0,s1=0,s2=0,s3=0,top=0;
    cin>>n1>>n2>>n3;
    int c1[n1],c2[n2],c3[n3];
    for(int i=0;i<n1;i++)
        cin>>c1[i];
    for(int i=n1-1;i>=0;i--)
      {
          cyl1.push(c1[i]);
          s1+=c1[i];
      }
    for(int i=0;i<n2;i++)
        cin>>c2[i];
    for(int i=n2-1;i>=0;i--)
       {
           cyl2.push(c2[i]);
           s2+=c2[i];
       }
    for(int i=0;i<n3;i++)
        cin>>c3[i];
    for(int i=n3-1;i>=0;i--)
       {
           cyl3.push(c3[i]);
           s3+=c3[i];
       }
    while((s1!=s2) || (s1!=s3))
    {

        if(s1>s2 && s1>s3)
        {
            top=cyl1.top();
            cyl1.pop();
            s1-=top;

        }
      else  if(s2>s1 && s2>s3)
        {
            top=cyl2.top();
            cyl2.pop();
            s2-=top;
        }
        else if(s3>s1 && s3>s2)
        {
            top=cyl3.top();
            cyl3.pop();
            s3-=top;
        }
    }
    if(s1==s2 && s1==s3)
            cout<<s1;
    return 0;
}
