#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
	int n=0,mini=INT_MAX,temp=0,t=0;
	cin>>t;
	while(t>0)
 {
     mini=INT_MAX;
	cin>>n;
	long int S[n];
	for(int i=0;i<n;i++)
	cin>>S[i];
    sort(S,S+n,greater<long int>());
	for(int i=0;i<n;i++)
	 {
	     temp=S[i];
	     for(int j=i+1;j<n;j++)
	    {
	       if(temp-S[j]>=0 && temp-S[j]<mini)
	        {
	            mini=temp-S[j];
	        }
	    }
	 }
	 cout<<mini<<'\n';

t--;
 }
	return 0;
}
