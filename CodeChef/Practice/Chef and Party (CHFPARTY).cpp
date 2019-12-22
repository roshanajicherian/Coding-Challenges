#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main()
{
    int t=0;
    long long int n=0,cou=0;
    cin>>t;
    while(t>0)
    {
    cou=0;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    sort(A,A+n);
    for(int i=0;i<n;i++)
    {
        if(cou>=A[i])
            cou++;
    }
    cout<<cou<<'\n';
    t--;
    }
    return 0;
}
