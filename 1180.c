#include<stdio.h>

int main(){

    int n,a,valor,menor,posicao,i;
    scanf("%d",&n);
    a = n;
    int x[n];
    menor = 1000;
    for (i=0;i<a;i++){

        scanf("%d",&valor);
        x[n] = valor;
        if (valor<menor){
            menor = valor;
            posicao = i;
        }

    }

    printf("Menor valor: %d\nPosicao: %d\n",menor ,posicao);
    
    return 0;
}