#include<stdio.h>

int main(){

    int x;
    float y;
    double consumomedio;
    

    scanf("%d %f",&x,&y);

    consumomedio = x/y;

    printf("%.3f km/l\n",consumomedio);

    return 0 ;
}