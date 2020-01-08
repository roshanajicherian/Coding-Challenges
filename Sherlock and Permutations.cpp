#include<bits/stdc++.h>
#define MAX 2000//Set MAX in the case of calculating factorials as the upper limit.Do not set very large values.
#define MOD 1000000007
typedef long long int ll;
using namespace std;
ll FAC[MAX],INV[MAX];
ll fpower(ll x,ll y)
{
    ll ret=1;
    ll b=x;
    while(y)
    {
        if(y&1)
            ret=(ret*b)%MOD;
        y>>=1;
        b=(b*b)%MOD;
    }
    return ret;
}
void precalc()
{
    FAC[0]=FAC[1]=1;
    INV[0]=INV[1]=1;
    for(int i=2;i<MAX;i++)
       {
        FAC[i]=(FAC[i-1]*i)%MOD;
        INV[i]=fpower(FAC[i],MOD-2);//MOD-2 is due to the property of Fermat's Little Theorem
       }
}
ll nCr(ll n,ll r)
{
    if(n<r)
        return -1;
    ll D=(INV[r]*INV[n-r])%MOD;
    ll R=(D*FAC[n])%MOD;
    return R;
}
int main()
{
    int t=0;
    cin>>t;
    assert(t>=1 && t<=200);
    precalc();
    while(t--)
    {
    ll n=0,m=0;
    cin>>n>>m;
    assert(n>=1 && m>=1 && n+m-1<=2000);
    ll res= nCr(n+m-1,n);
    cout<<res<<'\n';
    }
    return 0;
}
