#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool ifPrime(int number){
    if (number == 1) return false;
    for (int i=2; i*i <= number; i++) if (number % i == 0) return false; 
    return true;
}

int main() {
    int n, num;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &num);
        if (ifPrime(num)) printf("Prime\n"); 
        else printf("Not prime\n");
    }  
    return 0;
}

