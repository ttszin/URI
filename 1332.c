#include<stdio.h>
#include <string.h>
int main(){

    int n,i,cont;
    scanf("%d",&n);
    cont=0;
    for (i=1;i<=n;i++){
        
        char palavra[5];
        scanf("%s",palavra);
     
        if ( strlen (palavra) == 5 ) {
            printf ("3\n");
        }
        if (palavra[0]=='t'){
            cont++;
        }
        if(palavra[1]=='w'){
            cont++;
        }
        if(palavra[2]=='o'){
            cont++;
        }
        else if (cont>=2 && palavra[0]=='t' && strlen (palavra) != 5 ){
            printf("2\n");

        }
        else{
            printf("1\n");
        }
   
        
    }





    return 0;
}