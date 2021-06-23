#include <bits/stdc++.h>
using namespace std;

int main()
{
  char ch;
  cin >> ch;
  for(int i=1; i<= 5; i++){
  for(int j=1; j<= 5; j++){
    if(j<=i) cout << j; 
    else cout << " ";
  }
    for(int j=5; j > 0; j--){
    if(j>i) cout << " "; 
    else cout << j;
  }  
  cout << endl;
  }
  
  return 0;
}