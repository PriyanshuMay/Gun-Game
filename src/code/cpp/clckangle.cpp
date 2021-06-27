#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  double hh, mm;
  cin >> t;
  while(t--)
  {
    cin >> hh >> mm;
    double angle = abs(30 * (hh + (mm/60.0))  - ( 6 * mm) ); 
    cout << min(360 - angle, angle) << endl;
    
  }
  
  return 0;
}
