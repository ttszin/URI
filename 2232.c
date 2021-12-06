#include<stdio.h>
#include<math.h>
int soma(num){
    int somatriangulo;
    somatriangulo = pow(2,num);
    return somatriangulo;
}


int main(){

    int i,n,x,somatorio;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&x);
        somatorio = soma(x)-1;
        printf("%d\n",somatorio);
    }




    return 0;
}