#include <bits/stdc++.h>
using namespace std;


int main()
{
  int test;
  cin >> test;
  while(test--)
  {
    int x[4];
    int y[4];
    for(int i=0;i<4;i++) cin >> x[i] >> y[i];

    int a = (x[0]-x[1])*(x[0]-x[1]) + (y[0]-y[1])*(y[0]-y[1]);
    int b = (x[2]-x[3])*(x[2]-x[3]) + (y[2]-y[3])*(y[2]-y[3]);
    int m1 = (x[0]+x[1])/2;
    int m2 = (y[0]+y[1])/2;
    int m3 = (x[2]+x[3])/2;
    int m4 = (y[2]+y[3])/2;

    if(a == b && m1==m3 && m2==m4)
    cout << "Yes\n";
    else
    cout << "No\n";
  }
  
  return 0;
}