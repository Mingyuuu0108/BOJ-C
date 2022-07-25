#include "stdio.h"

int main(){
    int n;
    scanf("%d",&n);
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<i; j++) {
            printf(" ");
        }
        for (int k=n*2-1; k>i*2; k--) {
            printf("*");
        }
        printf("\n");
    }
    for (int i=n-1; i>0; i--) {
        for (int j=i-1; j>0; j--) {
            printf(" ");
        }
        for (int k=2*n-2*i+1; k>0; k--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
