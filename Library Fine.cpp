#include <iostream>

using namespace std;

int main()
{
    int d1=0,m1=0,y1=0;
    int d2=0,m2=0,y2=0;
    int fine=0;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;

    if(m2<m1)
    {
        fine=500*(m1-m2);
    }
    else if(d2<d1)
    {
        fine=15*(d1-d2);
    }
    if(y2<y1)
    {
        fine=10000;
    }
    cout<<fine;
    return 0;
}
