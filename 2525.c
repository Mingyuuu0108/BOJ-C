#include "stdio.h"

int main(){
    int n,a=0,b=0,plus = 50;
    scanf("%d",&n);
    
    for(int i=0;i<=n;i++){
        for(int j=i;j<=n;j++){
            if(i*j>=n && (i*j-j)<n){
                
                if(i+j < plus){
                    plus = i+j;
                    a = i;
                    b = j;
                }
            }
        }
    }
    printf("%d %d",a,b);
    return 0;
    
}
