#include<stdio.h>

int main(){

    int x[10],n;

    for(n=0;n<10;n++){
        scanf("%d",&x[n]);
        if(x[n]>0){
            printf("X[%d] = %d\n",n,x[n]);
        }
        else if(x[n]<=0){
            x[n] = 1;
            printf("X[%d] = %d\n",n,x[n]);
        }
    }


    return 0;
}