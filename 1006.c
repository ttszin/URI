#include<stdio.h>

int main(){
    double a;
    double b;
    double c;
    double media;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);

    media = (a*2+b*3+c*5)/10;

    printf("MEDIA = %.1lf\n",media);

    return 0 ;
}