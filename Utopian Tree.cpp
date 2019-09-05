#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  int mins=0;
  int A[3]={10,5,1};
  for(int i=0;n>0;i++)
  {
      mins+=n/A[i];
      n=n%A[i];

  }
  cout<<mins;

}
