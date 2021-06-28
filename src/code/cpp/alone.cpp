#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n, ele,ans=0; 
  cin >> n;
  for(int i=0; i<n; i++) 
  {
    cin >> ele;
    ans ^= ele;
  }
  return ans;
}

int main()
{
  int t;
  cin >> t;
  while(t--) cout << solve() << endl;
  return 0;
}