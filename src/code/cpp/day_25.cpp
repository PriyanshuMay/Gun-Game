#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool ifPrime(int number){
    if (number == 1) return false;
    for (int i=2; i*i <= number; i++) if (number % i == 0) return false; 
    return true;
}

int main() {
    int n, num;
    cin >> n;
    while(n--){
        cin >> num;
        if (ifPrime(num)) cout << "Prime\n"; 
        else cout << "Not prime\n";
    }  
    return 0;
}
