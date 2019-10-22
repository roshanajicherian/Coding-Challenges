#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    float bal;
    int with;
    cin>>with;
    cin>>bal;
    if(with%5==0 && bal>with+0.50)
    {
        cout<<bal-with-0.50;
    }
    else
        cout<<bal;


}
