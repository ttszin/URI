#include<stdio.h>

int main(){

    int valor,nota100,nota50,nota20,nota10,nota5,nota2,nota1,resto;

    scanf("%d",&valor);

    nota100 = valor/100;
    resto = valor%100;

    nota50 = resto/50;
    resto = resto%50;

    nota20 = resto/20;
    resto = resto%20;

    nota10 = resto/10;
    resto = resto%10;

    nota5 = resto/5;
    resto = resto%5;

    nota2 = resto/2;
    resto = resto%2;

    nota1 = resto/1;
    resto = resto%1;

    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",valor,nota100,nota50,nota20,nota10,nota5,nota2,nota1);
    return 0;
}
