#include <iostream>

using namespace std;
int mergei(int A[],int l,int h,int m)
{
    int mm=m+1;
    int n1=m-l+1;
    int n2=h-m;
    int i=0,j=0,k=0,inv=0;
    int T1[n1],T2[n2];
    for(i=0;i<n1;i++)
        T1[i]=A[l+i];
    for(j=0;j<n2;j++)
        T2[j]=A[m+1+j];
    i=0;
    j=0;
    k=l;
    while((i<n1)&& (j<n2))
    {
        if(T1[i]<=T2[j])
        {
            A[k]=T1[i];
            i++;

        }
        else
        {
            A[k]=T2[j];
            j++;inv+=(mm-i);
        }

        k++;
    }
    while(i<n1)
    {
        A[k]=T1[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        A[k]=T2[j];
        j++;
        k++;
    }
    return inv;
}
int mergesort(int A[],int l,int h)
{
    int m=0,inv=0;
    if(l<h)
    {
        m=(l+h)/2;
        inv=mergesort(A,l,m);
        inv+=mergesort(A,m+1,h);
        inv+=mergei(A,l,h,m);
    }
    return inv;
}
int main()
{
    int n=0,t=0,ans=0;
    cin>>t;
    while(t>0)
{   ans=0;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    ans=mergesort(A,0,n);
    cout<<ans<<'\n';
      t--;
}
    return 0;

}
