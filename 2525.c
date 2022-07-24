#include "stdio.h"
int main(){
    int h,m,t,Alltime=0;
    scanf("%d %d\n%d",&h,&m,&t);
    Alltime=h*60+m+t;
    
    if(Alltime/60<24){
        printf("%d %d",Alltime/60,Alltime%60);
    }
    else if(Alltime/60>=24){
        printf("%d %d",Alltime/60%24,Alltime%60);
    }
}

