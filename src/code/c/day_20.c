#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n; 

    scanf("%d", &n);

    int *a = malloc(sizeof(int) * n);

    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d", &a[a_i]);
    }
    
    int numberOfSwaps = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
                numberOfSwaps++;
            }
        }
        if (numberOfSwaps == 0) break;
    }

    printf("Array is sorted in %d swaps.\nFirst Element: %d\nLast Element: %d\n",            numberOfSwaps, a[0], a[n - 1]);
    return 0;
}