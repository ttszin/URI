#include <stdio.h>

int main(){

    int a,b,c,maior,segundomaior,menor;

    scanf("%d %d %d",&a,&b,&c);

    if (a>b && a>c){
        maior = a;

    }
    if (b>c && b>a){
        maior = b;
    }
    if(c>a && c>b){
        maior = c;
    }
    if (a<maior && (a>c || a>b)){

    segundomaior = a ;             

    }

    if (b<maior && (b>c || b>a)){

    segundomaior = b  ;            

    }
    if (c<maior && (c>b || c>a)){

        segundomaior = c;
    }
    if (a<b && a<c){
        menor = a;

    }
    if (b<c && b<a){
        menor = b;
    }
    if(c<b && c<a){
        menor = c;
    }

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",menor,segundomaior,maior,a,b,c);

    

    return 0 ;
}