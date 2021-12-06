#include<stdio.h>
#define MAX 10

typedef struct conta{
    int x;
    char nome[100];
    float saldo;
}Info;

void exibirinfo (Info nova, float saque);

Info novaconta(){
    Info nova;

    scanf("%d",&nova.x);
    scanf("%s",nova.nome);
    scanf("%f",&nova.saldo);

    return nova;
}

int main(){
    int i;
    float saque;
    
    Info n[MAX];

    for (i=0;i<MAX;i++){
        n[i] = novaconta();
    }

    scanf("%f",&saque);

    for (i=0;i<MAX;i++){
        exibirinfo(n[i], saque);
    }
    return 0;
}

void exibirinfo (Info nova, float saque){
    printf("%d\n",nova.x);
    printf("%s\n",nova.nome);
    if(nova.saldo - saque > 0){
        nova.saldo = nova.saldo - saque;
        printf("%.2f\n",nova.saldo);
    }
    else{
        printf("Saldo insuficiente.\n");
    }
}