#include<stdio.h>

int main(){
    int a, b ;
    double c, salario;

    scanf("%d %d %lf",&a,&b,&c);

    salario = b*c;
        
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n",a,salario);

    return 0 ;
}