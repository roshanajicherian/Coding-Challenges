#include <iostream>

using namespace std;
string check(int ch)
{
    string alpm;

        switch(ch)
     {
        case 1: alpm="one";
                 break;
        case 2: alpm="two";
                    break;
        case 3: alpm="three";
                    break;
        case 4 : alpm="four";
                    break;
        case 5 : alpm="five";
                    break;
        case 6:  alpm="six";
                    break;
        case 7: alpm="seven";
                    break;
        case 8: alpm="eight";
                    break;
        case 9: alpm="nine";
                    break;
        case 10: alpm="ten";
                    break;
        case 11: alpm="eleven";
                    break;
        case 12: alpm="twelve";
                    break;
        case 13: alpm="thirteen";
                    break;
        case 14:alpm="fourteen";
                    break;
        case 16: alpm="sixteen";
                    break;
        case 17: alpm="seventeen";
                    break;
        case 18: alpm="eighteen";
                    break;
        case 19: alpm="nineteen";
                    break;
        case 20: alpm="twenty";
                    break;
        case 21: alpm="twenty one";
                    break;
        case 22: alpm="twenty two";
                    break;
        case 23: alpm="twenty three";
                    break;
        case 24: alpm="twenty four";
                    break;
        case 25: alpm="twenty five";
                    break;
        case 26: alpm="twenty six";
                    break;
        case 27: alpm="twenty seven";
                    break;
        case 28: alpm="twenty eight";
                    break;
        case 29: alpm="twenty nine";
                    break;
             }
    return alpm;
}
int main()
{   int m=0,h=0;
    cin>>h>>m;
    string s1,s2,s3,s4;
    if(h<=12)
    {
         s1=check(h);
         s2=check(m);
    }

    if(m==1)
        s3="minute";
    else
        s3="minutes";

    if(m==15)
        cout<<"quarter past "<<s1;
    if(m==30)
        cout<<"half past "<<s1;
    if(m==45)
    {   s4=check(h+1);
        cout<<"quarter to "<<s4;
    }

    if(m==0)
        cout<<s1<<" o clock";
    if((m<30) && (m>0) && (m<15))
        cout<<s2<<" "<<s3<< " past "<<s1;
    if((m<30)&& (m>15))
       cout<<s2<<" "<<s3<< " past "<<s1;
    if((m>30) && (m!=45))
    {
        int fin=60-m;
        s2=check(fin);
        s4=check(h+1);
        cout<<s2<<" "<<s3<<" to "<<s4;

    }

    return 0;
}
