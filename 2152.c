#include<stdio.h>

int main(){
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int hora,minutos,status;
        
        scanf("%d %d %d",&hora,&minutos,&status); 
        if(status==1){
            printf("%02d:%02d - A porta abriu!\n",hora,minutos);
        }
        else if(status==0){
            printf("%02d:%02d - A porta fechou!\n",hora,minutos);
        }
        
    }

}