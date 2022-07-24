#include "stdio.h"
int main(){
    int n,m,card[100];
    int a,max = 0;
    
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&card[i]);
    }
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                
                a = card[i] + card[j] + card[k];
                
                if(a > max && a <= m)
                    max = a;
            }
        }
    }
    printf("%d",max);
    return 0;
}
