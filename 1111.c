#include<stdio.h>
#define MAX 4
#include<math.h>

typedef struct pontos{

    int ponto1;
    int ponto2;

}Ponto;


Ponto pontoslidos(){
    
    Ponto novoponto;

    scanf("%d %d",&novoponto.ponto1, &novoponto.ponto2);

    
    return novoponto;

}


double dist(Ponto x, Ponto y){
    
    double result1;
    double result2;

    return (double)(sqrt(pow((y.ponto1-x.ponto1),2)+pow((y.ponto2-x.ponto2),2)));

}



int main(){

    Ponto k[MAX];
    double rr, highest=0;
    int result1, i, j;
    for (result1 = 0; result1 < 4; result1++){
        k[result1] = pontoslidos();
    }
    for (i = 0; i < 3; i++){
        for (j = i+1; j < 4; j++){
            rr = dist(k[i], k[j]);
            if(rr > highest){
                highest = rr;
            }
        }
    }
 

    printf("A maior distancia entre os pontos foi: %.2lf\n", highest);




    return 0;

}