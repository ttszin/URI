#include<stdio.h>

int main(){

    int n, i,maior,posicao;
    maior = 0;
    for(i=1;i<=100;i++){

        scanf("%d",&n);
        if (n> maior){
            maior = n;
            if (maior == n){
                posicao = i;
            }
        }
    }

    printf("%d\n%d\n",maior,posicao);

    return 0 ;
}