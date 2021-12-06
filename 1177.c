#include<stdio.h>

int main(){

    int t,i,f,num,n[1000];
    scanf("%d",&t);
    num = 1000;
    f=0;
    for(i=0;i<num;i++){
        if (f<=t){
            printf("N[%d] = %d\n",i,f);
            f++;
        }
        else{
            f=0;
        }
    }

    return 0;
}