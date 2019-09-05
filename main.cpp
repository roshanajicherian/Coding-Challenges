#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main()
{
    int n1=0,m1=0,n2=0,m2=0;
    cout<<"First Array \n";
    cin>>n1>>m1;

    char A[n1][m1];
    //INPUT
    for(int i=0;i<n1;i++)
        for(int j=0;j<m1;j++)
            cin>>A[i][j];
            cout<<"Second Array \n";
    cin>>n2>>m2;
    char B[n2][m2];
    for(int i=0;i<n2;i++)
    for(int j=0;j<m2;j++)
        cin>>B[i][j];

        char temp,t1;
   while(A!='\0')
   {
       cout<<A.substr(0,5);
   }


    return 0;
}
