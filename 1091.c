#include<stdio.h>
#include<stddef.h>
#define true 1;
#define false 0;
void posicao(int x,int y,int x1,int y1);

int main(){

    int num,x,y,x1,y1,i,ini;

    ini =  true;
    while(ini==1){
        scanf("%d",&num);
        
        if (num==0){
            ini = false;
        }
        else if (num!=0){
            scanf("%d %d",&x,&y);
            for(i=0;i<num;i++){
                scanf("%d %d",&x1,&y1);
                posicao(x,y,x1,y1);
                
            }
        }
    }
    
    
    return 0;
}   

void posicao(int x,int y,int x1,int y1){
    if ((x1==x)||(y1==y)){
        printf("divisa\n");
    }

    else if ((x1>x)&&(y1>y)){
         printf("NE\n");
    }
    else if ((x1<x)&&(y1>y)){
         printf("NO\n");
    }
    else if ((x1>x)&&(y1<y)){
         printf("SE\n");
    }
    else if ((x1<x)&&(y1<y)){
         printf("SO\n");
    }
   
}