#include<stdio.h>

int main(){

    int a,b,c,MaiorAB;

    scanf("%d %d %d",&a,&b,&c);
    MaiorAB =(a+b+abs(a-b))/2;
    MaiorAB=(c+MaiorAB+abs(MaiorAB-c))/2;

    printf("%d eh o maior\n",MaiorAB);
    return 0;
}