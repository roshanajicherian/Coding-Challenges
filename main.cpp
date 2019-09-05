#include <iostream>

using namespace std;

int main()
{

    int n=0,bigi=INT_MAX,bigj=INT_MAX;
    cin>>n;
    char A[n][n],big=0;;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>A[i][j];
    for(int i=0;i<n;i++)
    {
        A[bigi][bigj]='X';

        for(int j=0;j<n;j++)
    {
            if(j==0)
            big=A[i][j];
            if (j!=0&&j!=n-1)
            {
                if(A[i][j]>big)
                {
                    bigi=i;
                    bigj=j;
                }


            }

    }

    }
        for(int i=0;i<n;i++)
    {
        cout<<'\n';
        for(int j=0;j<n;j++)
        cout<<A[i][j]<<'\t';
    }
    return 0;
}
