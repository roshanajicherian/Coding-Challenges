#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int maxelt(long int A[],int n,int &mxi)
{
     int mx=INT_MIN;
     for(int i=0;i<n;i++)
     {
         if(A[i]>mx)
            mx=A[i];
            mxi=i;
     }
     return mx;
 }
void rev(long int A[],int n)
{
     int i=0,fin=0,temp=0,start=0,mxi=0,cou=0,flag=0,j=0;
      int mx=maxelt(A,n,mxi);
   while(i<n-1)
        {   flag=0;
            if(A[i]==mx)
            {
            i++;
            flag=2;
            fin=i;
            cou++;
            }
            if((A[i]<mx)&& (A[i+1]<A[i]) && (flag!=2))
            {
                i++;
                fin=i;
                cou++;
                flag=1;
            }
            if(flag==0)
                {
                    i++;
                }

        }
        start=fin-cou;
        i=start;
        j=fin;
       while(i<j)
       {
           temp=A[i];
           A[i]=A[j];
           A[j]=temp;
           i++;
           j--;
       }
        if(std::is_sorted(A,A+n))
        cout<<"yes\nreverse "<<start+1<<' '<<fin+1;
        else
            cout<<"no";
}

void swa(long int A[],long int B[],int n)
{
    int cou=0,temp=0,i=0;
    for(i=0;i<n && cou<1;i++)
    {
        if(B[i+1]<B[i])
        {
            cou++;
            temp=B[i];
            B[i]=B[i+1];
            B[i+1]=temp;

        }
    }
    if(std::is_sorted(B,B+n)==false)
    {
        rev(A,n);
    }
    else
   cout<<"yes\nswap "<<i<<' '<<i+1;
}
int main()
{
    int n=0;
    cin>>n;
    long int A[n],B[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
        for(int i=0;i<n;i++)
            B[i]=A[i];
    if(std::is_sorted(B,B+n)==false)
    swa(A,B,n);
    else
        cout<<"Already Sorted";
    return 0;
}
