#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t=0;
    cin>>t;
    while(t>0)
    {
    int n=0,cou=0,isum=0,cur=0,sum=0,k=0;
    cin>>n;
    cin>>k;
    int A[n];
    for(int i=0;i<n;i++)
        {
        cin>>A[i];
        sum+=A[i];
        }
    sort(A,A+n,greater<int>());
    for(int i=0;i<n;i++)
    {
        cur=A[i];
        isum=sum-cur;
        if(A[i]+k>isum)
            cou++;
        else
            break;
    }
    cout<<cou<<'\n';
    t--;
    }
    return 0;
}
