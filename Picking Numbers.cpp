#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int A[26],mx=0;
    string B;
    for(int i=0;i<26;i++)
    {
        cin>>A[i];
    }
    cin>>B;
    int len=B.size();
    for(char c:B)
    {
        mx=max(mx,A[c-'a']);
    }


    int area=len*mx;
    cout<<area;
}
