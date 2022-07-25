#include "stdio.h"

int main(){
    int n;
    scanf("%d",&n);
    
    for (int i=1; i<n; i++) {
        for (int j=0; j<i; j++) {
            printf("*");
        }
        for (int k=n*2; k>i*2; k--) {
            printf(" ");
        }
        for (int g=0; g<i; g++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i=0; i<n*2; i++) {
        printf("*");
    }
    printf("\n");
    for (int i=1; i<n; i++) {
        for (int j=n; j>i; j--) {
            printf("*");
        }
        for (int k=0; k<i*2; k++) {
            printf(" ");
        }
        for (int g=n; g>i; g--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
    
}

