#include <stdio.h>

int main(){

    float a,b,c,troca;

    scanf("%f %f %f",&a,&b,&c);

    if (a < b){
         troca = a; a = b; b = troca; 
    } 

    if (b < c){   
        troca = b; b = c; c = troca; 
    } 

    if (a < b){ 
        troca = a; a = b; b = troca; 
    }
    

    if (a>=b+c){
        printf("NAO FORMA TRIANGULO\n");

    }

    

    else if (a*a == b*b+c*c){
        printf("TRIANGULO RETANGULO\n");

    }

    

    else if (a*a >b*b+c*c){
        printf("TRIANGULO OBTUSANGULO\n");

    }

    

    else if (a*a<b*b+c*c){
        printf("TRIANGULO ACUTANGULO\n");

    }


    if (a==b && b==c){
        printf("TRIANGULO EQUILATERO\n");

    }


    else if (a==b||b==c){
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}