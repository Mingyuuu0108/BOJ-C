#include "stdio.h"

int main(){
    int n,ans = 0;
    scanf("%d",&n);

    for (int i=1; i<n; i++) {
        int ddd = i,num = i;
        
        while (num > 0) {
            ddd += num%10;
            num /= 10;
        }
        
        if(ddd == n) {
            ans = i;
            break;
        }
    }
    if(ans != 0)
        printf("%d",ans);
    else printf("0");
    
    return 0;
}
