#include<stdio.h>
#include<math.h>
int main(){

    double a,b,c,atriangulo,acirculo,atrapezio,aquadrado,aretangulo;
    scanf("%lf %lf %lf",&a,&b,&c);
    atriangulo = (a*c)/2;
    acirculo = 3.14159*(pow(c,2));
    atrapezio = ((a+b)*c)/2;
    aquadrado = pow(b,2);
    aretangulo = a*b;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",atriangulo,acirculo,atrapezio,aquadrado,aretangulo);


    return 0;
}