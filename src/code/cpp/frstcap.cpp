#include <bits/stdc++.h>
using namespace std;

int firstCap(string str, int i=0){
  if(str[i] == '\0') return -1;
  if (isupper(str[i])) return i;
  return firstCap(str, i+1);
}

int solve(){
  string str;
  cin >> str;
  int ans = firstCap(str);
  return ans;
}

int main()
{
  int t;
  cin >> t;
  while(t--) cout << solve() << endl;
  return 0;
}