#include<stdio.h>
#include<math.h>
int main(){

    float x,y,x2,y2,distancia;
    scanf("%f %f\n",&x,&y);
    scanf("%f %f",&x2,&y2);
    distancia = (sqrt(pow(x2-x,2)+pow(y2-y,2)));

    printf("%.4f\n",distancia);




    return 0;
}