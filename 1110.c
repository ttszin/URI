#include <stdio.h>
#define MAX 10
#include <string.h>


typedef struct dados{
    char nome[100];
    char sobrenome[100];
    int idade;
}pessoa;

void informacoes (pessoa novapessoa);

pessoa fninformacoes(){
    
    pessoa novapessoa;

    scanf("%s",novapessoa.nome);
    scanf("%s",novapessoa.sobrenome);
    scanf("%d",&novapessoa.idade);

    return novapessoa;
    
}



int main(){
    
    int i;
    char buscador[100];
    
    pessoa info[MAX];


    for (i=0;i<MAX;i++){
        info[i] = fninformacoes();
    }

    scanf("%s", buscador);

    for (i=0;i<MAX;i++){
        char* conferindo = strstr(info[i].nome, buscador);
        char* conferindo2 = strstr(info[i].sobrenome, buscador);
        if(conferindo || conferindo2){
            informacoes(info[i]);
        }
    }
    return 0;
}

void informacoes (pessoa novapessoa){
    printf("%s\n",novapessoa.nome);
    printf("%s\n",novapessoa.sobrenome);
    printf("%d\n",novapessoa.idade);
}