#include "stdio.h"

int main(){
    int n;
    int num = 665,cnt = 0;
    scanf("%d",&n);
    
    while (1) {
        
        num += 1;
        
        if (num%1000 == 666) {
            cnt++;
        }
        else if (num/10%1000 == 666) {
            cnt++;
        }
        else if (num/100%1000 == 666) {
            cnt++;
        }
        else if (num/1000%1000 == 666) {
            cnt++;
        }
        if (n == cnt) {
            printf("%d",num);
            break;
        }
    }
    return 0;
}
