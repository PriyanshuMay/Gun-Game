#include <bits/stdc++.h>
using namespace std;

bool isLeap(int year)
{
    return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

int main()
{
  int t, year;
  cin >> t;
  while(t--){
  cin >> year;
  isLeap(year) ? cout << "Yes\n": cout << "No\n";
  }
  return 0;
}