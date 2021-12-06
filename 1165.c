#include<stdio.h>

int main(){

    int nt,x,calculo,cont,i,j;

    scanf("%d",&nt);
    
    
    for (i=1;i<=nt;i++){

        scanf("%d",&x);
        cont=0;
        for(j=1;j<=x;j++){

            calculo = x%j;
            if (calculo == 0){
                cont++;
            }
            
        }
        
        

        if (cont == 2){
            printf("%d eh primo\n",x);
            }
        else if (cont!=2){
            printf("%d nao eh primo\n",x);
        }


    }




    return 0;
}