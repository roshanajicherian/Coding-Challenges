#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
long long int presuf(string A,string B)
{
    long long int pref=0;
    long long int minlen=min(A.size(),B.size());
    for(long long int i=0;i<minlen;i++)
    {
        if(A.substr(0,i)==B.substr(0,i))
               pref=i;
            else
                break;
    }
    return pref;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t=0;
    cin>>t;
    while(t>0)
    {
    vector <string> A;
    string input,curs1,curs2,A1,B1;
    long long int n=0,res=0,temp=0,cur=0,pref=0,suf=0;
    cin>>n;
    long long int C[n],B[n];
    for(long long int i=0;i<n;i++)
    {
        cin>>input;
        A.push_back(input);
        C[i]=0;
        B[i]=0;
    }
    cout<<'\n';
    for(long long int i=0;i<n;i++)
    {
        if(C[i]==0)
        {
        curs1+=A[i];
        cout<<"CURS 1 \n"<<curs1<<'\n';
        for(long long int j=i+1;j<n;j++)
        {
            if(C[j]==0 && C[i]==0)
            {
            curs2=A[j];
            if(curs1==curs2)
                {
                    temp=curs1.size();
                    cout<<"Temp "<<temp<<'\n';
                    cur=temp*temp;
                    res+=cur;
                    temp=0;
                }

            else
            {
                A1=curs1;
                B1=curs2;
                pref=presuf(curs1,curs2);
                reverse(A1.begin(),A1.end());
                reverse(B1.begin(),B1.end());
                suf=presuf(A1,B1);
            if(pref!=0 || suf!=0)
            {
                C[i]=1;
                C[j]=1;
                temp=min(pref,suf);
                cur=temp*temp;
                res+=cur;
                temp=0;
            }
            }
            }
        }
        }
        }
    cout<<res<<'\n';
    t--;
    }
    return 0;
}
