#include <bits/stdc++.h>
using namespace std;

int solve()
{
  int n, ans=0; 
  cin >> n;
  vector<int> arr(n);
  for(int i=0; i<n; i++) cin >> arr[i];
  vector<int> odered(arr.begin(),arr.end());
  sort(odered.begin(), odered.end());
  for(int i=0; i<n; i++) if (arr[i] != odered[i]) ans++;
  return ans;
}

int main()
{
  int t;
  cin >> t;
  while(t--) cout << solve() << endl;
  return 0;
}