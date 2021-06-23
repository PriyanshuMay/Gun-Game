#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, num, sum;
  cin >> t;
  while(t--)
  {
    cin >> num;
    sum = 1;
    for(int i=2; i*i <= num; i++){ 
      if (num % i == 0){
      if(i*i!=num) sum = sum + i + num/i;
      else sum=sum+i;
    }
    }
    if (sum == num && num != 1) cout << "true\n";
    else cout << "false\n";
  }
  
  return 0;
}