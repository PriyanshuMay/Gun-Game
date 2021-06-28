#include <bits/stdc++.h>
using namespace std;

bool isPrime(){
  int n;
  cin >> n;
  for(int i=2; i*i<=n; i++) 
  if (n%i == 0) return false;
  return true;
}

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
  if(isPrime()) cout << "Yes\n";
  else cout << "No\n";
  }
  return 0;
}