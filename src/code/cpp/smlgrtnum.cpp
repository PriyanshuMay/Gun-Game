#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while(t--){  
  int n,k,l,m,e,ele;
  l = m = e = 0;
  cin >> n >> k;
  for(int i=0; i<n; i++) 
  {
    cin >> ele;
    if(ele > k) m++;
    if(ele == k) e++;
    if(ele < k) l++;
  }
  cout << l <<" "<< m <<" "<< e <<endl;
  }
  return 0;
}