#include <iostream>
using namespace std;

int main()
 {
     int n=0,s=5,tot=0,lk=0;
     cin>>n;
     for(int i=1;i<=n;i++)
     {
       lk=s/2;
       tot+=lk;
       s=lk*3;;
     }
     cout<<tot;
 }
