#include <iostream>
using namespace std;

int main()
{
    int t=0,asc=0,sublen=0;
    cin>>t;
    string A;
    while(t>0)
    {
        sublen=0;
    cin>>A;
    int len=A.length();
    int B[123];
    for(int i=0;i<123;i++)
        B[i]=0;
    for(int i=0;i<len;i++)
    {
        asc=A[i];
        B[asc]++;
    }
    for(int i=97;i<123;i++)
    {
        if(B[i]>0)
            sublen++;
    }
    cout<<sublen<<'\n';
    t--;
    }
    return 0;
}
