#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    int store=0,check=0,newn=0,leng=1,bred=1,mina=INT_MAX,dif=0,t=0;
    long long int n=0;
    cin>>t;
    while(t>0)
    {
        mina=INT_MAX,bred=1;
    cin>>n;
    int primes[n+1];
    vector<int> primefactors;
    for(int i=0;i<=n;i++)
        primes[i]=1;
    primes[0]=0;
    primes[1]=1;
    for(int i=2;i<=n;i++)
    {
        if((primes[i]==1))
        {
            for(int j=2;i*j<=n;j++)
                primes[i*j]=0;
        }
    }
    for(int i=2;i<=n;i++)
    {
        newn=n;
        if((primes[i]==1) && (n%i==0))
            {
                store=i;
                check=n%store;
                while((check==0))
                {   newn=newn/store;
                    primefactors.push_back(store);
                    check=newn%store;
                }
            }
    }
    primefactors.push_back(1);
    for(unsigned int i=0;i<primefactors.size();i++)
    {

        leng=primefactors[i];
        bred=1;
        for(unsigned int j=0;j<primefactors.size();j++)
        {
            if(i!=j)
                bred*=primefactors[j];
        }
        dif=abs(leng-bred);
        if(dif<mina)
            mina=dif;
    }
   cout<<mina<<'\n';
    t--;
    }
    return 0;
}
