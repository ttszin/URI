#include<stdio.h>

int main(){

    char nome[100];
    double salario,vendastotais,total;
    scanf("%s\n%lf\n%lf",nome,&salario,&vendastotais);
    total = salario+(vendastotais*15/100);

    printf("TOTAL = R$ %.2lf\n",total);






    return 0;
}