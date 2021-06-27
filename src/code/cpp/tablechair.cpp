#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int m,r1,r2,r3;
  cin >> m >> r1 >> r2 >> r3;
  int rem = m%4;
  if (rem == 1)  return min(3*r1, min(r1 + r2, r3));
  if (rem == 2)  return min(r1*2, min(r2, r3*2));
  if (rem == 3)  return min(r1, min(r2 + r3, 3*r3));
  return 0;
}

int main()
{
  int test;
  cin >> test;
  while(test--)
  {
    cout << solve() << endl;
  }
  return 0;
}