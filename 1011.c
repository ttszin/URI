#include<stdio.h>
#include<math.h>
int main(){

    double a, volume;

    scanf("%lf",&a);

    volume = (4.0/3)*3.14159*pow(a,3);

    printf("VOLUME = %.3lf\n",volume);

    return 0 ;
}