#include <iostream>
#include <vector>
using namespace std;
int pref=0,suf=0;
bool presuf(string A,string B)
{
    int flag=0,i=1,j=1,t1=0;
    pref=0;
    suf=0;
    int lenb=B.length();
    int lena=A.length();
    int milen=min(A.length(),B.length());
    int malen=max(A.length(),B.length());
    for(int i=0;i<milen;i++)
    {
        if(A[i]==B[i])
                pref++;
        else
            break;
    }
    if(milen==malen)
    {
    for(int k=A.length()-1;k>=0;k--)
    {
        if(A[k]==B[k])
                suf++;
        else
            break;
    }
    }

    else
    {
        while(i<lena && j<lenb)
        {
            if(A[lena-i]==B[lenb-j])
            {
                suf++;
                i++;
                j++;
            }
            else
                break;
        }

    }
    if(pref==0 && suf==0)
        return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t=0;
    cin>>t;
    while(t>0)
    {
    vector <string> A;
    string input,curs1,curs2;
    long long int n=0,res=0,temp=0,cur=0;
    cin>>n;
    int C[n],B[n];
    for(int i=0;i<n;i++)
    {
        cin>>input;
        A.push_back(input);
        C[i]=0;
        B[i]=0;
    }
    for(long long int i=0;i<n;i++)
    {
        if(C[i]==0)
        {
        curs1=A[i];
        for(long long int j=i+1;j<n;j++)
        {
            if(C[j]==0 && C[i]==0)
            {
            curs2=A[j];
            if(curs1==curs2)
                temp=curs1.length();

            else if (presuf(curs1,curs2))
            {
                C[i]=1;
                C[j]=1;
                temp=min(pref,suf);
            }
                cur=temp*temp;
                res+=cur;
                temp=0;
            }
        }
        }
        }
    cout<<res<<'\n';
    t--;
    }
    return 0;
}
