#include<stdio.h>

int main(){

    int codigopeca,numpecas,codigopeca2,numpecas2;
    double valor1,valor2,conta;

    scanf("%d %d %lf\n %d %d %lf",&codigopeca,&numpecas,&valor1,&codigopeca2,&numpecas2,&valor2);
    conta = (numpecas*valor1)+(numpecas2*valor2);
    printf("VALOR A PAGAR: R$ %.2lf\n",conta);

    return 0;
}