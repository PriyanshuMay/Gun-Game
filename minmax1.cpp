#include <bits/stdc++.h>
using namespace std;

int main()
{
  int test,n,ele;
  cin >> test;
  while(test--){ 
  cin >> n;   
  int mx=INT_MIN,mn=INT_MAX;
  for (int i = 0; i < n; i++){
      cin >> ele;
      if (ele > mx) mx = ele;
      if (ele < mn) mn = ele;
  }
  cout << mn <<" "<< mx << endl;
}
  return 0;
}