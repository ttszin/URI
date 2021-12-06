#include<stdio.h>

int main(){

    double n ;
    scanf("%lf",&n);
    
    int cem,cinquenta,vinte,dez,cinco,dois,um,cinq,vtc,dz,sc,zzu,moedas,n2;
    n2 = (int)n;
    n -= n2;
    cem = n2/100;

    cinquenta = n2%100/50;
    vinte = n2%100%50/20;
    dez = n2%100%50%20/10;
    cinco = n2%100%50%20%10/5;
    dois = n2%100%50%20%10%5/2;
    
    
    moedas = n*100;
    

    um = n2%100%50%20%10%5%2/1;
    cinq = moedas /50;
    vtc = moedas %50/25;
    dz = moedas%50%25/10;
    sc = moedas%50%25%10/5;
    zzu = moedas%50%25%10%5/1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",cem);
    printf("%d nota(s) de R$ 50.00\n",cinquenta);
    printf("%d nota(s) de R$ 20.00\n",vinte);
    printf("%d nota(s) de R$ 10.00\n",dez);
    printf("%d nota(s) de R$ 5.00\n",cinco);
    printf("%d nota(s) de R$ 2.00\n",dois);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",um);
    printf("%d moeda(s) de R$ 0.50\n",cinq);
    printf("%d moeda(s) de R$ 0.25\n",vtc);
    printf("%d moeda(s) de R$ 0.10\n",dz);
    printf("%d moeda(s) de R$ 0.05\n",sc);
    printf("%d moeda(s) de R$ 0.01\n",zzu);
    
    return 0 ;
}