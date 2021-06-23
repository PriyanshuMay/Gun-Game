#include <bits/stdc++.h>
using namespace std;

int main()
{
  int len, quan, cost;
  cin >> len;
  while(len--){
  cin >> quan >> cost;
  if (quan > 100)
  printf("%0.1f\n", (double) quan * cost * 0.8);
  else printf("%0.1f\n", (double) quan * cost);
  }
  
  return 0;
}