#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, low, high, ans=0;
  cin >> t;
  while(t--)
  {
    cin >> low >> high;
    if (high - low > 1) ans++;
  }
  cout << ans;
  return 0;
}