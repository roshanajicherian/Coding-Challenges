#include <iostream>

using namespace std;

struct triag
{
    int x;
    int y;
    int z;
    triag()
    {
        x=0;
        y=0;
    }
};
int main()
{
    int n=0;
    cin>>n;
    triag A;
    triag B;
    triag C;
    int minia=INT_MAX,maxa=0,area=0,locmi=0,locma=0;
    for(int i=1;i<=n;i++)
        {
          cin>>A.x>>A.y;
          cin>>B.x>>B.y;
          cin>>C.x>>C.y;
          area=abs(((A.x*(B.y-C.y))+(B.x*(C.y-A.y))+(C.x*(A.y-B.y)))/2);
          if(area<=minia)
            {
                minia=area;
                locmi=i;
            }
           if(area>=maxa)
           {
            maxa=area;
            locma=i;
           }


        }
        cout<<locmi<<' '<<locma;
    return 0;
}
