#include <stdio.h>

int main() {
    int n[20];
    int i;
    int cont,num;
    num = 20;
    cont = -1;
    for (i=0; i < num; i++){
        scanf("%d",&n[i]);
         
    }
    
        
    for (i=(num-1);i >=0; i--){    
        cont++;
        printf("N[%d] = %d\n",cont,n[i]);
        
         
    }
    return 0;  
}