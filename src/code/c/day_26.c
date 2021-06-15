#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int d1,d2,m1,m2,y1,y2,ans = 0;
    scanf("%d%d%d%d%d%d", &d1,  &m1,  &y1,  &d2,  &m2,  &y2);
    
    if (y1 > y2) ans = 10000;
    else if (y1 == y2) {
    if (m1 > m2) ans = 500 * (m1 - m2);
    else if (m1 == m2 &&d1 > d2) ans = 15 * (d1 - d2);      
    } 
    
    printf("%d", ans);
    return 0;
}
