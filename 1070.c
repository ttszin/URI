#include<stdio.h>

int main(){

    int x,i,cont;
    scanf("%d",&x);
    cont=0;
    for(i=17;i>=cont;i--){
        if (x%2>0){
            printf("%d\n",x);
            cont++;
        }
        x++;
    }

    return 0;
}