#include<stdio.h>
#include<math.h>

int rafael(a,b){
    int resultado1;
    resultado1 = pow(3*a,2) + pow(b,2);
    return resultado1;
}

int beto(a,b){
    int resultado2;
    resultado2 = 2*pow(a,2) + pow(5*b,2);
    return resultado2;
}


int carlos(a,b){
    int resultado3;
    resultado3 = -100*a + pow(b,3);
    return resultado3;
}




int main(){

    int n,x,y,res1,res2,res3,i;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        res1 = rafael(x,y);
        res2 = beto(x,y);
        res3 = carlos(x,y);

        if ((res1>res2)&&(res1>res3)){
            printf("Rafael ganhou\n");
        }
        else if ((res2>res1)&&(res2>res3)){
            printf("Beto ganhou\n");
        }
        else if ((res3>res1)&&(res3>res2)){
            printf("Carlos ganhou\n");
        }
    }



    
    
    return 0;
}