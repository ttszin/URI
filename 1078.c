#include<stdio.h>

int main(){

    int n,i,tabuada ;

    scanf("%d",&n);

    if (n>2 && n<1000){

        for (i=0;i<=10;i++){
            if (i>=1){
                tabuada = i * n;
                printf("%d x %d = %d\n",i,n,tabuada);
            }
            
        }


    }





    return 0;
}