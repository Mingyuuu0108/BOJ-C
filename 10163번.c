#include "stdio.h"

int main(){
    int arr[1001][1001] = {0};
    int n;
    int a,b,c,d = 0;
    int cnt = 0;
    
    scanf("%d",&n);
    
    for (int i=1; i<=n; i++) {
        scanf("%d %d %d %d",&a,&b,&d,&c);
        
        for (int j=0; j<d; j++) {
            for (int k=0; k<c; k++) {
                arr[a][b+k] = i;
            }
            a++;
        }
    }
    
    for (int m=1; m<n+1; m++) {
        for (int i=0; i<1001; i++) {
            for (int j=0; j<1001; j++) {
                if (arr[i][j] == m) {
                    cnt ++;
                }
            }
        }
        printf("%d\n",cnt);
        cnt = 0;
    }
}
