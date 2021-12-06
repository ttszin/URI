#include<stdio.h>

int main(){

    int t,pa,pb,i,cont;
    double g1,g2;
    
    scanf("%d",&t);
    for (i=0;i<t;i++){
        scanf("%d %d %lf %lf",&pa,&pb,&g1,&g2);
        cont = 0;
        while(pa<=pb){
            pa = pa+(pa*g1/100.0);
            pb = pb+(pb*g2/100.0);
            cont++;              
            if(cont>100){
                printf("Mais de 1 seculo.\n");
                break;
            }  
        }
        
         
        if (cont<=100){
            printf("%d anos.\n",cont);
        }        
         

    }




    return 0 ;
}