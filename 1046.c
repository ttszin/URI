#include<stdio.h>

int main(){

    int hi,hf,horas;

    scanf("%d %d",&hi,&hf);
    if(hf==hi){
        printf("O JOGO DUROU 24 HORA(S)\n",horas);

    }
    
    else if (hi>hf){
        horas= 24-(hi-hf);
        printf("O JOGO DUROU %d HORA(S)\n",horas);

        
    }

    else if(hf>hi){
        horas = (hf-hi);
        printf("O JOGO DUROU %d HORA(S)\n",horas);
    }

    

    return 0;
}

