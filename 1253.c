#include <stdio.h>
#include <string.h>

int main(){
    int i,repeticoes,numcasas,cont;
    char palavras[50];
    scanf("%d", &repeticoes);
    for (i=0;i<repeticoes;i++){
        scanf("%s",palavras);
        scanf("%d",&numcasas);
    
        for (cont=0;cont<strlen(palavras);cont++){
            if (palavras[cont]<'A'+numcasas){
            
                palavras[cont]='Z'- numcasas +(palavras[cont]-'A')+1;
            
            }    
            else{

                palavras[cont]=palavras[cont]-numcasas ;

            }
        }    
        printf("%s\n",palavras);
    }
    
       
    
    return 0;
}

