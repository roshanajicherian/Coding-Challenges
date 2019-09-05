#include <iostream>

using namespace std;

int main()
{
    int n=0,flag=1,t=0;
    char A[10],temp;
    cin>>t;
    for(int z=0;z<t;z++)
    {
        flag=1;
    cin>>n;
    cin>>A;
    for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
        {
            if((A[i]==A[j])&&(A[i]!='_'))
            {
                flag=1;
                temp=A[i+1];
                A[i+1]=A[j];
                A[j]=temp;
            }
            if((A[i]!=A[j])&&(A[i]!='_')&&(A[j]!='_'))
                flag=0;

        }
        }

                if(flag==0)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
