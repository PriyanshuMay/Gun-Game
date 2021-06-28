#include <bits/stdc++.h>
using namespace std;


int solve(){
  int n, x, ele,index = -1, ans = -1;
  cin >> n >> x;
  for (int i=0; i<n; i++)
  { 
    cin >> ele;
    if (ele > ans && ele <= x)
    {
      ans = ele;
      index = i;
    }
  }
  return index;
}

int main()
{
  int t;
  cin >> t;
  while(t--) cout << solve() << endl;
  return 0;
}