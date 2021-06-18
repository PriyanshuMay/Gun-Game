#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int cmp(const void *a, const void *b) {
    const char *s1 = *(const char **)a, *s2 = *(const char **)b;
    return strcmp(s1, s2);
}
    
int main(){
    int n, size = 0; 
    scanf("%d",&n);
    char *list[30];
    for(int i = 0; i < n; i++){
        char* name = (char *)malloc(20 * sizeof(char));
        char* email = (char *)malloc(50 * sizeof(char));
        scanf("%s %s",name,email);
        if(strcmp((email+strlen(email)-10), "@gmail.com") == 0) list[size++] = name;
    }
    qsort(list, size, sizeof(char *), cmp);
    for (int i=0;i!=size;++i) printf("%s\n", list[i]);
    return 0;
}