#include <iostream>

using namespace std;

int main()
{
    long long int a=0,b=0,act=0,fin=0;

    cin>>a>>b;
    if(a>b)
     act=a-b;
     else
    act=b-a;
    fin=act;
    int lst=act%10;
    if(lst>1)
    {
        fin=fin-1;
    }
    if(lst<2)
        fin+=1;
    cout<<fin;
    return 0;
}
