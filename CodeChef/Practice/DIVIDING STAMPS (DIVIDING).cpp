#include <iostream>

using namespace std;

int main()
{
    int n=0,sum=0,sumi=0;
    cin>>n;
    int S[n];
    for(int i=1;i<=n;i++)
    {

        cin>>S[i];
        sum+=S[i];
       // sumi+=i;
    }
    sumi=n*(n+1)/2;
    if(sum==sumi)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
