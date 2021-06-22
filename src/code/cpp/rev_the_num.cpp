#include <bits/stdc++.h>
using namespace std;

int main()
{
long long int n,ans = 0;
cin >> n;
while(n>0)
{
  int rem = n % 10;
  n = n / 10;
  ans = ans * 10 + rem;
}
  cout << ans << "\n";
  return 0;
}
