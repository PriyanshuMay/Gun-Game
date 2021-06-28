#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    string str;
    cin >> str;
    int a = 0;
    int len = str.size();
    for(auto &ch:str)
    if(ch=='a') a++;
    if(a > len/2)
    cout << len << endl;
    else
    cout << (a-1)*2 + 1 << endl;
  }
  return 0;
}