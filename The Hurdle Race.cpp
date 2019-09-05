#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n=0,k=0;
    cin>>n>>k;
    int A[n];
    for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
    int m=*max_element(A,A+n);
    int pot=m-k;
    if(k>=m)
        pot=0;
    cout<<pot;
}
