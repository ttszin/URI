#include<stdio.h>
#include<string.h>
int main(){

    char frase[50],i;
    while(True){

        scanf("%s",frase[i]);
      
        for( i = 0; i < strlen(frase); i++ ){
		    frase[i] = toupper(frase[i]);
            i++;
        }   
  
        for( i = 1; i < strlen(frase); i++ ){
		    frase[i] = tolower(frase[i]);
            i++;
        }
        frase[strlen(frase)] = '\0';
        return frase;
        printf("%s",frase);
    }








    return 0;
}