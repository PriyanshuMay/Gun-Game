#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void printNext(ll num){
    cout << num << " ";
    if (num <= 1) return;
    if (num % 2 == 0) num = (ll) sqrt(num);
    else num = (ll) pow(num, 3.0 / 2.0);
    printNext(num);
}

int main()
{
  ll t,n;
  cin >> t;
  while(t--)
  {
    cin >> n;
    printNext(n);
    cout << "\n";
  }
  return 0;
}