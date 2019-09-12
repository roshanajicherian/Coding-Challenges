#include <iostream>
#include <string.h>
#include <string>
using namespace std;

string number="0123456789";
string special="!@#$%^&*()-+";

int check_upper(string pass,int len)
{
    int cou=0;

      for(int i=0;i<len;i++)
      {
          if (pass.substr(i,1)>="A" && pass.substr(i,1)<="Z")
                   {
                   cou=0;
                   break;
                   }
        else
                cou=1;
      }

        return cou;
}
int check_lower(string pass,int len)
{
     int cou=0;
    for(int i=0;i<len;i++)
      {
               if (pass.substr(i,1)>="a" && pass.substr(i,1)<="z")
                   {
                    cou=0;
                    break;
                   }
               else
                    cou=1;

     }
        return cou;
}

int check_number(string pass,int len)
{
     int cou=0,flag=0;
    for(int i=0;i<len;i++)
      {
          if(flag==1)
        break;
          for(int j=0;j<10;j++)
          {
               if((pass.substr(i,1))!=(number.substr(j,1))&& (flag==0))
                        cou=1;

               else if((pass.substr(i,1))==(number.substr(j,1)))
               {
                   cou=0;
                   flag=1;
                   break;
               }
        }
      }
      return cou;
}
int check_special(string pass,int len)
{
     int cou=0,flag=0;
    for(int i=0;i<len;i++)
      {
          if(flag==1)
        break;
          for(int j=0;j<12;j++)
          {
               if((pass.substr(i,1))!=(special.substr(j,1))&& (flag==0))
                        cou=1;
               else if((pass.substr(i,1))==(special.substr(j,1)))
               {
                   cou=0;
                   flag=1;
               }
        }
      }
      return cou;
}
int main()
{
    string pass;
    int len;
    cin>>len;
    cin>>pass;
    int cou=0;
    cou+=check_upper(pass,len);
    cou+=check_lower(pass,len);
    cou+=check_number(pass,len);
    cou+=check_special(pass,len);
    len=len+cou;
    if(len>=6)
       cou=cou;
   if((len<6)&& (cou>0))
        cou=6-len+cou;
    if((len<6)&&(cou==0))
       cou=6-len;
cout<<cou;
    return 0;
}
